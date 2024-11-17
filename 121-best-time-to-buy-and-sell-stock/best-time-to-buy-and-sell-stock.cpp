class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0, minB = prices[0];
        for (auto i = 0; i < prices.size(); i++) {
            minB = min(minB, prices[i]);
            maxProf = max(maxProf, prices[i] - minB);
        }
        return maxProf;
    }
};