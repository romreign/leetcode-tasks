class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int l = 0, d = 0;
        for (auto r = 0; r < seats.size(); r++) {
            if (!seats[l] && seats[r]) {
                d = max(d, r - l);
                l = r;
            }
            else if (seats[l] && seats[r]) {
                d = max(d, (r - l) / 2);
                l = r;
            }
        }
        if (l + 1 != seats.size())
            d = max(d, (int)(seats.size() - l - 1));
        return d;
    }
};