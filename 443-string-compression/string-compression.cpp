class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, res = 0;
        while (i < chars.size()) {
            int gl = 1;
            while (i + gl < chars.size() && chars[i + gl] == chars[i]) {
                gl++;
            }
            chars[res++] = chars[i];
            if (gl > 1) {
                for (auto c : to_string(gl)) {
                    chars[res++] = c;
                }
            }
            i += gl;
        }
        return res;
    }
};