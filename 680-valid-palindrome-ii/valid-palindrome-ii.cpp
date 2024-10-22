class Solution {
public:
    bool validPalindrome(const string& s, int l, int r, int cerr) {
        while (l < r) {
            if (s[l] != s[r]) {
                if (cerr)
                    return validPalindrome(s, l + 1, r, cerr - 1) || validPalindrome(s, l, r - 1, cerr - 1) ;
                else
                    return false;
            }
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        return validPalindrome(s, 0, (s.size() - 1), 1);
    }
};