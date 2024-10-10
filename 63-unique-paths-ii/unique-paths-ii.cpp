class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0] == 1 || obstacleGrid[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1])
            return 0;
        vector<vector<int>> d (obstacleGrid.size() + 1, vector<int>(obstacleGrid[0].size() + 1, 0));
        d[1][1] = 1;
        for (auto i = 1; i <= obstacleGrid.size(); i++)
            for (auto j = 1; j <= obstacleGrid[0].size(); j++)
            {
                if (i == 1 && j == 1 || obstacleGrid[i - 1][j - 1])
                    continue;
                d[i][j] = d[i - 1][j] + d[i][j - 1];
            }
        return d[obstacleGrid.size()][obstacleGrid[0].size()];
    }
};