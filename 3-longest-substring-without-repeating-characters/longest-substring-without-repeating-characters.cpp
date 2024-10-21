class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(127);
        int d = 0, l = -1;
        for (auto i = 0; i < s.size(); i++) {
            while (v[s[i]]) {
                l++;
                v[s[l]]--;
            }
            v[s[i]]++;
            d = max(d, (i - l));
        }
        return d;
    }
};