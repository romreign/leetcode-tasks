class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> mp(nums2.begin(), nums2.end());

        for(auto n : nums1) {
            if (mp.find(n) != mp.end()) {
                result.push_back(n);
                mp.erase(mp.find(n));
            }
        }
        return result;
    }
};