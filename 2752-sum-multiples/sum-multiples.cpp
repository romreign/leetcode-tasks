class Solution {
public:
    int sumOfMultiples(int n) {
        auto sum = 0;
        for (auto i = 1; i <= n; i++)
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
                sum += i;
        return sum;
    }
};