class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result = vector<vector<int>>(2);
        unordered_set<int> mp1;
        unordered_set<int> mp2;

        copy(nums1.begin(), nums1.end(), inserter(mp1, mp1.end()));
        copy(nums2.begin(), nums2.end(), inserter(mp2, mp2.end()));

        for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
            if (mp2.find(*it1) == mp2.end())
                result[0].push_back(*it1);

        for (auto it2 = mp2.begin(); it2 != mp2.end(); it2++)
            if (mp1.find(*it2) == mp1.end())
                result[1].push_back(*it2);
        
        return result;
    }
};