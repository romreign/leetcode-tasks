class Solution {
public:
    bool ispalindrome(string& s, int l, int r, int c) {
        while (l < r) {
            if (s[l] != s[r]) {
                if (c == 0) 
                    return ispalindrome(s, l + 1, r, ++c) || ispalindrome(s, l, r - 1, ++c);
                else return false;
            }
            l++, r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        return ispalindrome(s,0, s.size() - 1, 0);
    }
};