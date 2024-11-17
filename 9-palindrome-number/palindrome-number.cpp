class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long k = 0, copyX = x;
        while (copyX > 0) {
            k = k * 10 + copyX % 10;
            copyX /= 10;
        }
        return k == x;
    }
}; 
