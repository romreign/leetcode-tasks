class Solution {
public:
    void reversSubArr(int left, int right, vector<int>& nums)
    {
        right--;
        while (left < right)
        {
            swap(nums[left], nums[right]);
            left++, right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reversSubArr(0, nums.size(), nums);
        reversSubArr(0, k, nums);
        reversSubArr(k, nums.size(), nums);
    }
};