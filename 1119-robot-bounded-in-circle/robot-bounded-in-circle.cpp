class Solution {
public:
    bool checkCord(int& x, int& y) {
        if (x == 0 && y == 0)
            return true;
        else
            return false;
    }

    bool isRobotBounded(const string& instructions) {
        int x = 0, y = 0;
        int Direction = 0;
        
        for (auto i = 0; i < instructions.size(); i++) {
            if (instructions[i] == 'G') {
                     if (Direction == 0) x++;
                else if (Direction == 2) x--;
                else if (Direction == 1) y++;
                else if (Direction == 3) y--;
            }
            else {
                if (instructions[i] == 'L') Direction = (Direction + 3) % 4;
                else                        Direction = (Direction + 1) % 4;
            }        
        }

        if (checkCord(x,y) || Direction != 0)
            return true;

        return false;
    }
};