class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int md = -1, minv = numeric_limits<int>::max();
        for (auto i = 0; i < prices.size(); i++) {
            minv = min(minv, prices[i]);
            md = max(md, prices[i] - minv);
        }
        return md;
    }
};