class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
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
        return max(max_count, count);
    }
};