class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        auto first = 0, maxD = 0;
        set<char> Set;
        for(auto second = 0; second < s.length(); second++)
        {
            while (Set.count(s[second]))
            {
                Set.erase(s[first]);
                first++;
            }
            Set.insert(s[second]);
            maxD = max(maxD, second - first + 1);
        }
        return maxD;
    }
};

