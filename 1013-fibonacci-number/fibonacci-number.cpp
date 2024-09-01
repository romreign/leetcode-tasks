class Solution {
public:
    unordered_map<int, int> um;
    int fib_res(int n)
    {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (um.find(n) != um.end()) return um[n];
        return um[n] = fib_res(n - 1) + fib_res(n - 2); 
    }
    int fib(int n) {
        return fib_res(n);
    }
};