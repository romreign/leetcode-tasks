class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        bool coincidence = true;
        unordered_set<char> m_set;

        for(auto c : allowed)
            m_set.insert(c);

        for (auto word : words)
        {
            coincidence = true;
            for (auto c: word)
            {
                if (m_set.count(c) == 0)
                {
                    coincidence = false;
                    break;
                }
            }
            if (coincidence)
                count++;
        }
        return count;
    }
};