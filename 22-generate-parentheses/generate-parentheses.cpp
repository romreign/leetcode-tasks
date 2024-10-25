class Solution {
public:
    vector<string> ans;

    void backtracking(const int& n, string str, int l, int r) {
        if (str.size() == n * 2) {
            ans.push_back(str);
            return;
        }

        if (l < n) 
            backtracking(n, str + '(', l + 1, r);
        if (r < l) 
            backtracking(n, str + ')', l, r + 1);
    }

    vector<string> generateParenthesis(int n) {
        string str = "";
        backtracking(n, str, 0, 0);
        return ans;
    }
};