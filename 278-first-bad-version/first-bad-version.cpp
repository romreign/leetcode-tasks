// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 0;
        int hi = n;
        int ans = -1;

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;
            if (!isBadVersion(mi))
                lo = mi + 1;
            else {
                hi = mi - 1;
                ans = mi;
            }
        }
        return ans;
    }
};