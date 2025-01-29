class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeros = 0, first = 0, count = 0;
        
        for(auto last = 0; last < nums.size(); last++) {
            if(nums[last] == 0)
                zeros++;
            
            while(zeros > 1) {
                if (nums[first] == 0)
                    zeros--;
                first++; 
            }
            count = max(count, last - first);
        }
        return count;
    }
};