class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0;
        for (auto i = 0; i < t.size() && l < s.size(); i++) {
            if (t[i] == s[l])
                l++;
        }
        return l == s.size() ? true : false;
    }
};