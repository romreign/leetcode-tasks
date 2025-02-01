class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int lo = 0;
        int hi = nums.size() - 1;
        int ans = -1;

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;
            if (nums[mi] < target)
                lo = mi + 1;
            else if (nums[mi] > target) 
                hi = mi -1;
            else {
                ans = mi;
                hi = mi - 1;
            }
        }
        result.push_back(ans);

        if (ans == -1) {
            result.push_back(ans);
            return result;
        }
        lo = ans;
        hi = nums.size() - 1;

        while(lo <= hi) {
            const int mi = lo + (hi - lo) / 2;
            if (nums[mi] < target)
                lo = mi + 1;
            else if (nums[mi] > target) 
                hi = mi -1;
            else {
                ans = mi;
                lo = mi + 1;
            }
        }
        result.push_back(ans);

        return result;
    }
};