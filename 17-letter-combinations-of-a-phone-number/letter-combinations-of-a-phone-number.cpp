class Solution {
    unordered_map<char, string> table{{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
                                      {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
                                      {'8', "tuv"}, {'9', "wxyz"}};

    std::vector<std::string> ans;

    void backtr(string d, int i, string& str) {
        if (i == d.size()) {
            ans.push_back(str);
            return;
        }

        for (auto c : table[d[i]]) {
            str += c;
            backtr(d, i + 1, str);
            str.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string& d) {
        if (d.empty())
            return ans;
        string str = "";
        backtr(d, 0, str);
        return ans;
    }
};