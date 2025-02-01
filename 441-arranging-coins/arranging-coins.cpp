class Solution {
public:
    bool isGood(const long& k, const long& n) {
        return k * (k + 1) / 2 <= n;
    }

    int arrangeCoins(const int& n) {
        int lo = 0;
        int hi = INT_MAX;
        int ans = -1;

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;
            if (isGood(mi, n)) {
                ans = mi;
                lo = mi + 1;
            }
            else 
                hi = mi - 1;
        }
        return ans;
    }
};