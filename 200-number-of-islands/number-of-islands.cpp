class Solution {
public:

    void dfs(int x, int y, vector<vector<char>>& grid, int m, int n, vector<vector<int>>& visited) {
        vector<int> dx{-1, 0, 0, 1};
        vector<int> dy{0, -1, 1, 0};
        stack<pair<int, int>> st;

        visited[x][y] = 1;
        st.push({x, y});

        while (!st.empty()) {
            auto temp = st.top();
            st.pop();
            auto p1 = temp.first;
            auto p2 = temp.second;
            
            for (auto i = 0; i < dx.size(); i++) {
                auto tx = dx[i] + p1;
                auto ty = dy[i] + p2;
                if (tx >= 0 && ty >= 0 && tx < m && ty < n 
                    && !visited[tx][ty] && grid[tx][ty] == '1') {
                        st.push({tx, ty});
                        visited[tx][ty] = 1;
                    }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        auto m = grid.size(), n = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(m, vector<int>(n, 0));

        for (auto i = 0; i < m; i++) {
            for (auto j = 0; j < n; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    count++;
                    dfs(i, j, grid, m, n, visited);
                }
            }
        }
        return count;
    }
};