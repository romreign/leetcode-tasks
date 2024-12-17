class Solution {
public:
    int maxPower(string s) {
        int count = 0, maxcount = 0;
        char c;
        for (auto i = 0; i < s.size(); i++) {
            if (c != s[i]) {
                count = 1;
                c = s[i];
            }
            else
                count++;
            maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};