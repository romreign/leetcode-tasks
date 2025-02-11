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
            if (checkVowels(s[lo]) && checkVowels(s[hi])) 
                swap(s[lo++], s[hi--]);
            else if (!checkVowels(s[lo]) && !checkVowels(s[hi]))
                lo++, hi--;
            else if (checkVowels(s[lo]))
                hi--;
            else
                lo++;
        }
        return s;
    }
};