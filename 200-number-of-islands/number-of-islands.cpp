class Solution {
public:

    void dfs(int x, int y, vector<vector<char>>& grid, int m, int n, vector<vector<int>>& visited) {
        vector<int> dx{-1, 0, 0, 1};
        vector<int> dy{0, -1, 1, 0};

        visited[x][y] = 1;
        for (auto to = 0; to < dx.size(); to++) {
            auto tx = dx[to] + x;
            auto ty = dy[to] + y;
            if (tx >= 0 && ty >= 0 && tx < m && ty < n 
               && !visited[tx][ty] && grid[tx][ty] == '1') {
                dfs(tx, ty, grid, m, n, visited);
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