class Solution {
public:
    unordered_map<int, int> mp {{0, 0}, {1, 1}, {2,2}, {3,3}};
    int climb(int n) {
        if (mp.find(n) != mp.end()) return mp[n];
        else return mp[n] = climb(n - 1) + climb(n - 2);
    }
    int climbStairs(int n) {
        return climb(n);
    }
};
