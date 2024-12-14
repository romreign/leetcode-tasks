class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string buffer = "";
        string result = "";
        while (ss >> buffer) {
            reverse(buffer.begin(), buffer.end());
            result += buffer + " ";
        }
        result.pop_back();
        return result;
    }
};