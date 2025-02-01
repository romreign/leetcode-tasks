class Solution {
public:
    char nextGreatestLetter(const vector<char>& letters, const char& target) {
        int lo = 0;
        int hi = letters.size() - 1;
        char ans = letters[0];

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;

            if (letters[mi] <= target)
                lo = mi + 1;
            else {
                hi = mi - 1;
                ans = letters[mi];
            }
        }
        return ans;
    }
};