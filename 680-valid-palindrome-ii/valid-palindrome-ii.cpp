class Solution {
public:
    bool valid (string& s, int l, int r, int count) {
        while (l < r) {
            if (s[l] != s[r]){
                if (count == 0)
                    return valid(s, l + 1, r, count + 1) || valid(s, l, r - 1, count + 1);
                else 
                    return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        return valid(s, 0, s.size() - 1, 0);
    }
};