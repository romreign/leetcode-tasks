class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0, coincidence = 0;
        unordered_set<char> m_set;
        for(auto c : allowed)
            m_set.insert(c);
        for (auto word : words)
        {
            coincidence = 0;
            for (auto c: word)
            {
                if (m_set.find(c) != m_set.end())
                    coincidence++;
                else
                    break;
            }
            if (coincidence == word.length())
                count++;
        }
        return count;
    }
};