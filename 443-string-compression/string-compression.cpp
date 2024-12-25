class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0, i = 0;
        while (i < chars.size()) {
            int count = 1;
            while (i + count < chars.size() && chars[i] == chars[i + count])
                count++;
            chars[j++] = chars[i];

            if (count > 1) {
                for (auto c : to_string(count)) 
                    chars[j++] = c;
            }
            i += count;
        }
        return j;
    }
};