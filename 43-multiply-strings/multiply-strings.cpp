class Solution {
public:
    string multiply(string num1, string num2) {
        string result = "";
        int k = 0;
        vector<int> numInt (num1.size() + num2.size());

        for (int i = num1.size() - 1; i >= 0; i--) {
            for (int j = num2.size() - 1; j >= 0; j--) {
                numInt[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                numInt[i + j] += numInt[i + j + 1] / 10;
                numInt[i + j + 1] %= 10; 
            }
        }

        while (numInt[k] == 0 && k < numInt.size() - 1)
            k++;

        for ( ; k < numInt.size(); k++)
            result += (numInt[k] + '0');
        return result;
    }
};