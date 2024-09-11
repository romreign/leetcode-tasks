class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;
        for (size_t i = 1; i <= n; i++)
            i % m == 0? num2 += i : num1 += i;
        return num1 - num2;
    }
};