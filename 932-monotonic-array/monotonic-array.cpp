class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        bool isup = true, isdown = true;
        for (auto i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1]) isup = false;
            else if (nums[i] < nums[i + 1]) isdown = false;
        }
        return isup || isdown;
    }
};