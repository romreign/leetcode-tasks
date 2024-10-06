class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isup = false, isdown = false;
        for (auto i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
                isup = true;
            else if (nums[i] > nums[i + 1])
                isdown = true;
        }
        return ((isdown == isup && isup == false) || (isdown != isup)) ? true : false;
    }
};