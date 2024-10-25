class Solution {
public:
    vector<vector<int>> ans;

    void backtracking(vector<int>& candidates, int& target, int sum, vector<int>& str, int i) {
        if (sum == target) {
            ans.push_back(str);
            return;
        }

        if (sum > target)
            return;

        for (; i < candidates.size(); i++) {
            str.push_back(candidates[i]);
            backtracking(candidates, target, sum + candidates[i], str, i);
            str.pop_back();
        }

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> str;
        backtracking(candidates, target, 0, str, 0);
        return ans;
    }
};