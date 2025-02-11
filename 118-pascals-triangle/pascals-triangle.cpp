class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(auto i = 0; i < numRows; i++) {
            vector<int> buf = vector<int>(i + 1, 1);
            for (auto j = 1; j < buf.size() - 1; j++)
                buf[j] = result[i - 1][j - 1] + result[i - 1][j];
            result.push_back(buf);
        }
        return result;
    }
};