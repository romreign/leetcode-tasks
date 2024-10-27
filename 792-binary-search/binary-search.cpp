class Solution {
public:
    bool good(int k, int t) {
        if (k <= t)
            return true;
        return false;
    }
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while (r - l > 1) {
            int m = (l + r) / 2; 
            if (good(nums[m], target))
                l = m;
            else
                r = m;
        }
        return nums[l] == target? l : -1;
    }
};