class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_multiset<int> mp2 (nums2.begin(), nums2.end());

        for (auto n : nums1) {
            if (mp2.find(n) != mp2.end()) {
                result.push_back(n);
                mp2.erase(mp2.find(n));
            }
        }
        return result;
    }
};