class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result_for_u {1};
        int zer = digits[0];
        if (digits.size() == 1)
        { 
            if (digits[0] == 9)
                return {1, 0};
            else
            {
                digits[0] = digits[0] + 1;
                return digits;
            }
        }
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            {
                digits[i]++;
                break;
            }
            else
            {
                digits[i] = 0;
            }
        }
        if (digits[0] == 0)
        {
            for (auto i : digits)
                result_for_u.push_back(i);
            return result_for_u;
        }
        return digits;
    }
};