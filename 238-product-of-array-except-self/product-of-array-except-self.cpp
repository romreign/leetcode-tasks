class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int buf = 1;
        for (auto i = 1; i < nums.size(); i++) 
            result[i] = result[i - 1] * nums[i - 1];
         
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= buf;
            buf *= nums[i];
        }
        return result;
    }
};

