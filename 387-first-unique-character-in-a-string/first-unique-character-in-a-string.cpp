class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(27, 0);

        for (auto c : s)
            freq[c - 'a']++;
            
        for (auto i = 0; i < s.size(); i++)
            if (freq[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};