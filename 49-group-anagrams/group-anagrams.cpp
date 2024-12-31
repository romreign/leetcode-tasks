class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;

        for (auto& s : strs) {
            auto key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        for (auto& p : mp)
            result.push_back(p.second);

        return result;
    }
};