class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_multiset<int> mp1 (nums1.begin(), nums1.end());
        for (auto i = 0; i < nums2.size(); i++) {
            if (mp1.find(nums2[i]) != mp1.end()) {
                result.push_back(nums2[i]);
                mp1.erase(mp1.find(nums2[i]));
            }
        }
        return result;
    }
};