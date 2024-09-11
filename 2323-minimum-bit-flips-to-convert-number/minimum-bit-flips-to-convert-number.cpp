class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xor_ = start ^ goal;
        int count = 0;
        while (xor_)
        {
            count += xor_ & 1;
            xor_ = xor_ >> 1;
        }
        return count;
    }
};