class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);
        unordered_set<int> mp1 (nums1.begin(), nums1.end());
        unordered_set<int> mp2 (nums2.begin(), nums2.end());

        for (auto n : mp1) {
            if (mp2.find(n) == mp2.end()) 
                result[0].push_back(n);
        }

        for (auto n : mp2) {
            if (mp1.find(n) == mp1.end()) 
                result[1].push_back(n);
        }
        return result;
    }
};