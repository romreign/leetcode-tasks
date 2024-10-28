class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);
        vector<int> pref(n);
        vector<int> post(n);

        pref[0] = 1;
        post[n - 1] = 1;

        for (auto i = 1; i < n; i++)
            pref[i] = pref[i - 1] * nums[i - 1];

        for (auto i = n - 2; i >= 0; i--)
            post[i] = post[i + 1] * nums[i + 1];
        
        for (auto i = 0; i < n; i++)
            ans[i] = pref[i] * post[i];

        return ans;
    }
};