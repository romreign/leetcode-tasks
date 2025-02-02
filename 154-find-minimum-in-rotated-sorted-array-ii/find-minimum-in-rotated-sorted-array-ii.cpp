class Solution {
public:
    int findMin(const vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1;
        int ans = nums[0];

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;
            if (nums[mi] > nums[hi])
                lo = mi + 1;
            else if (nums[mi] < nums[hi]) 
                hi = mi - 1;
            else
                hi--;
            ans = min(nums[mi], ans);
        }
        return ans;
    }
};