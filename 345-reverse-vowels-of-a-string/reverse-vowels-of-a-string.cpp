class Solution {
public:
    bool checkVowels(char& c) {
        unordered_set<char> mp {'a', 'e', 'i', 'o', 'u'};

        if (mp.contains(tolower(c)))
            return true;
        return false;
    }

    string reverseVowels(string s) {
        int lo = 0, hi = s.size() - 1;

        while (lo < hi) {
            while(lo < hi && !checkVowels(s[lo])) ++lo;
            while(lo < hi && !checkVowels(s[hi])) --hi;
            swap(s[lo++], s[hi--]);
        }
        return s;
    }
};