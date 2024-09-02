class Solution {
public:
    int findNumbers(vector<int>& nums) {
        auto count = 0, count_result = 0;
        for (auto num : nums)
        {
            count = 0;
            while(num)
            {
                num /= 10;
                count++;
            }
            if (count % 2 == 0)
                count_result++;
        }
        return count_result;
    }
};