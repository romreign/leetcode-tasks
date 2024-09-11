class Solution {
public:
    int myAtoi(string s) {
        bool negative = false;
        long long num = 0;
        int str_index = 0;
        while (str_index < s.size() && s[str_index] == ' ')
            str_index++;
        if (s[str_index] == '-')
        {
            negative = true;
            str_index++;
        }
        else if (s[str_index] == '+')
            str_index++;
        while (str_index < s.size())
        {
            if (s[str_index] >= '0' && s[str_index] <= '9')
            {
                num = num * 10 + (s[str_index] - '0');
                if (num > numeric_limits<int>::max() && negative)
                    return numeric_limits<int>::min();
                if (num > numeric_limits<int>::max() && !negative)
                    return numeric_limits<int>::max();
            }
            else break;
            str_index++;
        }
        if (negative)
            num *= -1;
        return num;
    }
};