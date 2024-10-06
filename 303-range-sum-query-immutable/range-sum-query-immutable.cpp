class NumArray {
    vector<int> preSum;
public:
    NumArray(vector<int>& nums) {
        preSum = vector<int>(nums.size() + 1, 0);
        for (auto i = 1; i < nums.size() + 1; i++)
            preSum[i] = nums[i - 1] + preSum[i - 1];
    }
    
    int sumRange(int left, int right) {
        return preSum[right + 1] - preSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */