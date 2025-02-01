class Solution {
public:
    int LeftBoundary(const vector<int>& nums, const int& target) {
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
        return ans;
    }

    int RightBoundary(const vector<int>& nums, const int& target) {
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
                lo = mi + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(const vector<int>& nums, const int& target) {
        return vector<int>{LeftBoundary(nums, target), RightBoundary(nums, target)};
    }
};