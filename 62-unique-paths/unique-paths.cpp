class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> d(m + 1, vector<int> (n + 1, 0));
        d[1][1] = 1;
        for (auto i = 1; i <= m; i++)
            for (auto j = 1; j <= n; j++)
            {
                if (i == 1 && j == 1)
                    continue;
                d[i][j] = d[i][j - 1] + d[i - 1][j];
            }
        return d[m][n];
    }
};