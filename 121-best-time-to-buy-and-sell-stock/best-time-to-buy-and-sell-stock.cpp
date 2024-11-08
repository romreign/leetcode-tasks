class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min_v = std::numeric_limits<int>::max();
        for (auto i = 0; i < prices.size(); i++) {
            min_v = min(min_v, prices[i]);
            profit = max(profit, prices[i] - min_v);
        }
        return profit;
    }
};