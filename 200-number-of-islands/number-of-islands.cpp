class Solution {
    vector<vector<int>> visited;
public:
    void dfs(vector<vector<char>>& grid, int x, int y) {
        visited[x][y] = 1;
        static vector<int> dx = {0, 1, 0, -1}; 
        static vector<int> dy = {-1, 0, 1, 0};
        for (auto i = 0; i < dx.size(); i++) {
            auto tx = x + dx[i];
            auto ty = y + dy[i];
            if (tx >= 0 && tx < grid.size() && ty >= 0 && ty < grid[0].size() && grid[tx][ty] == '1' && !visited[tx][ty])
                dfs(grid, tx, ty);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        auto count = 0;
        auto n = grid.size(), m = grid[0].size();
        visited = vector<vector<int>>(n, vector<int>(m));
        for (auto i = 0; i < n; i++)
            for (auto j = 0; j < m; j++)
                if (!visited[i][j] && grid[i][j] == '1') {
                    count++;
                    dfs(grid, i, j);
                }
        return count;
    }
};