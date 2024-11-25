class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<pair<int, int>> mp;
        mp.insert({x, y});
        for (auto c : path) {
            if (c == 'N')
                y++;
            else if (c == 'E')
                x++;
            else if (c == 'S')
                y--;
            else
                x--;
            if (mp.find({x, y}) != mp.end())
                return true;
            mp.insert({x, y});
        }
        return false;
    }
};