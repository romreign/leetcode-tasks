auto x = []() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
};

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> ht;
        int count = 0, presum = 0;
        ht[presum] = 1;
        for (auto n : nums) {
            presum += n;
            auto it = ht.find(presum - k);
            if (it != ht.end())
                count += it->second;
            ht[presum]++;
        }
        return count;
    }
};
   