class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (auto i = s.size() / 2; i >= 1; i--) 
            if (s.size() % i == 0) 
                if(s.substr(0, s.size() - i) == s.substr(i)) return true;
        return false;
    }
};
