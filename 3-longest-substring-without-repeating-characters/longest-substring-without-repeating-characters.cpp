class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        auto first = 0, maxD = 0;
        vector<bool> vec(127, false);
        for(auto second = 0; second < s.length(); second++)
        {
            while (vec[s[second]])
            {
                vec[s[first]] = false;  
                first++;
            }
            vec[s[second]] = true;
            maxD = max(maxD, second - first + 1);
        }
        return maxD;
    }
};


