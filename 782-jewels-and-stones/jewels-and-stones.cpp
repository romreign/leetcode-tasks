class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result = 0;
        unordered_set<char> mp(jewels.begin(), jewels.end());
        for (auto c : stones)
            if (mp.find(c) != mp.end())
                result++;
        return result;
    }
};