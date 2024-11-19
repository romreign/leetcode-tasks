class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        vector<int> alp (27, 0);

        for (auto c : s) 
            alp[c - 'a']++;

        for (auto c : t) {
            alp[c - 'a']--;
            if (alp[c - 'a'] < 0)
                return false;
        }
        return true;
    }
};