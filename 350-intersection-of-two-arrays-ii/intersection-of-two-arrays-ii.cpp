class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> result;
        unordered_multiset<int> m1 (nums1.begin(), nums1.end());
        unordered_multiset<int> m2 (nums2.begin(), nums2.end());
        for (auto it = m1.begin(); it != m1.end(); it++) {
            if (m2.find(*it) != m2.end()) {
                result.push_back(*it);
                m2.erase(m2.find(*it));
            }
        }
        return result;
    }
};