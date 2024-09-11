class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        auto score = 0, remainder = 0;
        for(auto num : nums)
            if (num % 3 != 0) 
            {
                if (++num % 3 < --num % 3)
                    while (num % 3 != 0)
                        num++, score++;
                else
                    while (num % 3 != 0)
                        num--, score++;
            }
        return score;
    }
};