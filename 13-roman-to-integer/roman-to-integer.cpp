class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        map<char, int> mp
        {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (auto i = 1; i <= s.size(); i++) {
            if (i < s.size() && mp[s[i]] > mp[s[i - 1]]) 
                result -= mp[s[i - 1]];
            else
                result += mp[s[i - 1]];
        }
        return result;
    }
};