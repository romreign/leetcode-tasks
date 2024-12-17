class Solution {
public:
    string reverseWords(string s) {
        stringstream ss (s);
        string in = "";
        string result = "";
        while (ss >> in) {
            reverse(in.begin(), in.end());
            result += in + " ";
        }
        result.pop_back();
        return result;
    }
};