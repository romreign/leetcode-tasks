class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int md = 0, l = -1;
        vector<int> mp(128);
        for(auto r = 0; r < s.size(); r++) {
            while (mp[s[r]]) {
                l++;
                mp[s[l]]--;
            }
            mp[s[r]]++;
            md = max(md, r - l);
        }
        return md;
    }
};


