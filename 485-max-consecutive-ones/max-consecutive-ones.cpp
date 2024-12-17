class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, md = 0;
        for (auto n : nums){
            if (n != 0) {
                count++;
                md = max(md, count);
            }
            else
                count = 0;
        }
        return md;
    }
};