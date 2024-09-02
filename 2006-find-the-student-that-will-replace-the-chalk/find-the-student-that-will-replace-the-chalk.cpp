class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long consumption = 0, index = 0;
        for (auto count : chalk)
            consumption += count;
        k %= consumption;
        for (auto i = 0; i < chalk.size(); i++)
        {
            if (chalk[i] > k)
            {
                index = i;
                break;
            }
            k -= chalk[i];
        }
        return index;
    }
};