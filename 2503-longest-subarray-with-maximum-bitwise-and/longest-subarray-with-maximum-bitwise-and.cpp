class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        auto max_element = nums[0], count = 0, max_count = 0;
        for (auto num : nums){
            if (max_element == num)
                count++;
            else if (max_element < num){
                count = 1;
                max_element = num;
                max_count = 0;
            }
            else{
                max_count = max(max_count, count);
                count = 0;
            }
        }
        if (count > max_count)
            return count;
        return max_count;
    }
};