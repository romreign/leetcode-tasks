class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int n = 0, i = num1.size() - 1, j = num2.size() - 1;
        int d = 0;
        while (i >= 0 || j >= 0 || d) {
            if (i >= 0)
                d += (num1[i--] - '0');
            if (j >= 0)
                d += (num2[j--] - '0');
            ans = to_string(d % 10) + ans;
            d /= 10;
        }
        return ans;
    }
};

