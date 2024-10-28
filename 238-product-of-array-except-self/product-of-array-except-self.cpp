class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int x = 1;

        vector<int> ans(n);
        ans[0] = 1;

        for (auto i = 1; i < n; i++)
            ans[i] = ans[i - 1] * nums[i - 1];

        for (auto i = n - 1; i >= 0; i--) {
            ans[i] *= x;
            x *= nums[i]; 
        }

        return ans;
    }
};  