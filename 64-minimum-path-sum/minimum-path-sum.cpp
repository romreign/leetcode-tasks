class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        auto n = grid.size();
        auto m = grid[0].size();
        vector<vector<int>> result (n + 1, vector<int>(m));
        result[n - 1][m - 1] = grid[n - 1][m - 1];

        for (int i = n - 2; i >= 0; i--)
            result[i][m - 1] = result[i + 1][m - 1] + grid[i][m - 1];

        fill(result[n].begin(), result[n].end(), 1e9);

        for (int i = n - 1; i >= 0 ; i--)
            for (int j = m - 2; j >= 0; j--)
                result[i][j] = grid[i][j] + min(result[i + 1][j], result[i][j + 1]);
        
        return result[0][0];
    }
};