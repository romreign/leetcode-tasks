class Solution {
public:
    vector<int> pre;
    void pref(string s) {
        pre = vector<int>(s.size(), 0);
        for (int i = 1; i < s.size(); i++) {
            int j = pre[i - 1];

            while (j > 0 && s[j] != s[i])
                j = pre[j - 1];
            if (s[j] == s[i])
                j++;
            pre[i] = j;
        }
    }
    int strStr(string haystack, string needle) {
        pref(needle);
        int j = 0; 
        for (int i = 0; i < haystack.size(); i++) {
            while (j > 0 && haystack[i] != needle[j]) 
                j = pre[j - 1];
            if (haystack[i] == needle[j])
                j++;
            if (j == needle.size()) 
                return i - j + 1; 
        }
        return -1; 
    }
};