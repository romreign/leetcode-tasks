class Solution {
public:
    int findMin(const vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        int ans = INT_MAX;

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;
            if (nums[mi] > nums[hi])
                lo = mi + 1;
            else {
                ans = min(ans, nums[mi]);
                hi = mi - 1;
            }
        }
        return ans;
    }
};





