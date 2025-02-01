class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int ans = -1;

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;
            if (nums[mi] < target)
                lo = mi + 1;
            else {
                hi = mi - 1;
                ans = mi;
            }
        }

        if (ans == -1)
            return nums.size();
        return ans;
    }
};



