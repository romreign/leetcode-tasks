class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int> s1(nums1.begin(), nums1.end());
        unordered_multiset<int> s2(nums2.begin(), nums2.end());
        vector<int> result;
        for (auto it = s1.begin(); it != s1.end(); it++)
            if (s2.find(*it) != s2.end()){
                result.push_back(*it);
                s2.erase(s2.find(*it));
            }
        return result;
    }
};