class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> mp {{0, 0}};
        int x = 0, y = 0;

        for (auto c : path) {
            if (c == 'N')
                y++;
            else if (c == 'S')
                y--;
            else if (c == 'E')
                x++;
            else 
                x--;
            if (mp.find({x, y}) != mp.end())
                return true;
            mp.insert({x, y});
        }
        return false;
    }
};

