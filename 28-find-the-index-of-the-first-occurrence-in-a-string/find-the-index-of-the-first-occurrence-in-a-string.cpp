class Solution {
public:
    vector<int> p;
    void preix(string& s) {
        p = vector<int>(s.size(), 0);
        for (auto i = 1; i < p.size(); i++) {
            int j = p[i - 1];
            while (j > 0 && s[j] != s[i])
                j = p[j - 1];
            if (s[i] == s[j])
                j++;
            p[i] = j;
        }
    }
    int strStr(string haystack, string needle) {
        preix(needle);
        int j = 0;
        for (auto i = 0; i < haystack.size(); i++) {
            while (j > 0 && haystack[i] != needle[j])
                j = p[j - 1];
            if (needle[j] == haystack[i])
                j++;
            if(j == needle.size())
                return i - j + 1;
        }
        return -1;
    }
};