class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() < 2) return;
        int first = 0, second = 0;
        while (second != nums.size())
        {
            if (nums[first] == 0 && nums[second] != 0)
                swap(nums[first], nums[second]);
            if (nums[second] == 0 || second == first)
                second++;
            if (nums[first] != 0)
                first++;   
        }
    }
};