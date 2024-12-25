class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string result = "";
        string reader = "";

        while(ss >> reader) {
            reverse(reader.begin(), reader.end());
            result += reader + " ";
        }
        result.pop_back();
        return result;
    }
};