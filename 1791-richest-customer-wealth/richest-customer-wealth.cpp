class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = 0, sum = 0;
        for (auto i = 0; i < accounts.size(); i++)
        {
            sum = 0;
            for (auto j = 0; j < accounts[i].size(); j++)
                sum += accounts[i][j];
            if (sum > max_sum)
                max_sum = sum;
        }
        return max_sum;
    }
};