class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for(auto& str : strs){
            auto key = str;
            sort(key.begin(), key.end());
            mp[key].push_back(str);
        }

        for(auto& p : mp)
            result.push_back(p.second);
        
        return result;
    }
};