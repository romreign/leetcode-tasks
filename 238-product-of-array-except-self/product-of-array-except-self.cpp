class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 1, right = 1;

        for(auto i = 0; i < nums.size(); i++) {
            result[i] = left;
            left *= nums[i];
        }

        for(int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= right;
            right *= nums[i];
        } 
        return result;
    }
};