class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;

        for (auto i = 0; i < chars.size();) {
            char l = chars[i];
            int count = 0;
            while (i < chars.size() && chars[i] == l) {
                i++;
                count++;
            }
            chars[ans++] = l;
            if (count != 1) {
                for (auto c : to_string(count))
                    chars[ans++] = c;
            }
        }
        return ans;
    }
};