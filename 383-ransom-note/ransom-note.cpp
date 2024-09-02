class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (magazine.size() < ransomNote.size()) return false;
        unordered_map<char, int> um;
        for (auto c : magazine)
        {
            if (um.find(c) != um.end())
                um[c]++;
            else
                um[c] = 1;
        }
        for (auto c : ransomNote)
        {
            if (um.find(c) != um.end() && um[c] != 0)
                um[c]--;
            else
                return false;
        }
        return true;
    }
};