class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = 0;
        for (auto n : nums)
            number ^= n;
        return number;
    }
};