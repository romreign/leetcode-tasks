class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);
        unordered_set<int> mp1(nums1.begin(), nums1.end());
        unordered_set<int> mp2(nums2.begin(), nums2.end());

        for (auto it = mp1.begin(); it != mp1.end(); ++it) 
            if (mp2.find(*it) == mp2.end())
                result[0].push_back(*it);

        for (auto it = mp2.begin(); it != mp2.end(); ++it)
            if (mp1.find(*it) == mp1.end())
                result[1].push_back(*it);
        return result;
    }
};