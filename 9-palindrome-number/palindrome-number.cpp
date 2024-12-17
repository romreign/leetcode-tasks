class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int x_ = x;
        long n = 0;
        while (x_) {
            n = n * 10 + x_ % 10;
            x_ /= 10; 
        }
        return n == x;
    }
};