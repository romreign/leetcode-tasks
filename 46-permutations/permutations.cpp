class Solution {
public:
    vector<vector<int>> ans;

    void backtracking(int i, const vector<int>& nums, vector<int>& str, set<int>& uniq) {
        if (i == nums.size()) {
            ans.push_back(str);
            return;
        }

        for (auto c : nums) {
            if (uniq.count(c) == 0) {
                str.push_back(c);
                uniq.insert(c);
                backtracking(i + 1, nums, str, uniq);
                uniq.erase(c);
                str.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> str;
        set<int> uniq;
        backtracking(0, nums, str, uniq);
        return ans;
    }
};