class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        auto max_count = 0, count = 0;
        for (auto num : nums)
        {
            if (num == 0)
            {
                if (count > max_count)
                    max_count = count;
                count = 0;
            }
            else
                count++;
        }
        if (count > max_count)
            max_count = count;
        return max_count;
    }
};