class Solution {
public:
    bool good(long long k, long long t) {
        if (k * k <= t)
            return true;
        return false;
    }
    int mySqrt(int x) {
        if (x == 1)
            return 1;
        int l = 0, r = x;
        while (r - l > 1) {
            int m = (l + r) / 2;
            if (good(m, x))
                l = m;
            else
                r = m;
        }
        return l;
    }
};