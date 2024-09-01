class Solution {
public:
    vector<int> steps;
    int step (int n)
    {
        if (n <= 3) return n;
        if (steps[n] != -1) return steps[n];
        return steps[n] = step(n-1) + step(n - 2);     
    }
    int climbStairs(int n) {
        steps = vector<int>(n + 1, -1);
        return step(n);
    }
};