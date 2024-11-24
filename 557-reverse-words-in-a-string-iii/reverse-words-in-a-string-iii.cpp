class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string t, result = "";
        while (ss >> t) {
            for (int i = t.size() - 1; i >= 0; i--)
                result += t[i];
            result += ' ';
        }
        result.pop_back();
        return result;
    }
};