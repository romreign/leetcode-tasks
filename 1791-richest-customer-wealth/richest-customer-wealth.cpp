class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        auto max_sum = 0, sum = 0;
        for (auto account : accounts)
        {
            sum = 0;
            for (auto bank : account)
                sum += bank;
            if (sum > max_sum)
                max_sum = sum;
        }
        return max_sum;
    }
};