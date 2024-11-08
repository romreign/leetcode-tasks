class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result (2);
        unordered_set<int> m1(nums1.begin(), nums1.end());
        unordered_set<int> m2(nums2.begin(), nums2.end());

        for (auto it = m1.begin(); it != m1.end(); it++)
            if (m2.find(*it) == m2.end())
                result[0].push_back(*it); 
        
        for (auto it = m2.begin(); it != m2.end(); it++)
            if (m1.find(*it) == m1.end())
                result[1].push_back(*it);

        return result;
    }
};