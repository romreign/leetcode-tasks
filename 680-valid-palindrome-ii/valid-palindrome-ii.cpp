class Solution {
public:
    bool validPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++, r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (s[l] != s[r]) {
                return validPalindrome(s, l, r - 1) || validPalindrome(s, l + 1, r);
            }
            l++, r--;
        }
        return true;
    }
};