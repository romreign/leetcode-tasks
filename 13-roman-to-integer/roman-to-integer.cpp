class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        unordered_map<char, int> um
        {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (auto i = 1; i <= s.length(); i++)
        {
            if (um[s[i]] > um[s[i - 1]])
                number -= um[s[i - 1]];
            else
                number += um[s[i - 1]];
        }
        return number;
    }
};