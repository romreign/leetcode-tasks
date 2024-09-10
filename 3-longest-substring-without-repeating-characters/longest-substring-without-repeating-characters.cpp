class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> m_set;
        auto left_border = 0, max_count = 0;
        for (auto right_border = 0; right_border < s.length(); right_border++)
        {
            if (m_set.count(s[right_border]) == 0)
            {
                m_set.insert(s[right_border]);
                max_count = max(max_count, right_border - left_border + 1);
            }
            else
            {
                while(m_set.count(s[right_border]) != 0)
                {
                    m_set.erase(s[left_border]);
                    left_border++;
                }
                m_set.insert(s[right_border]);
            }
        }
        return max_count;
    }
};