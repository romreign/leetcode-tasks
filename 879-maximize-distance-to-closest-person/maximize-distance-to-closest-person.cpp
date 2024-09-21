class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int left = 0, maxDist = 0, size = seats.size();
        for (auto right = 0 ; right < size; right++)
        {
            if (seats[left] == 0 && seats[right] == 1)
            {
                maxDist = max(maxDist, right - left);
                left = right;
            }
            else if (seats[left] == 1 && seats[right] == 1)
            {
                maxDist = max(maxDist, (right - left) / 2);
                left = right;
            }
        }
        maxDist = max((size - 1 - left), maxDist);
        return maxDist;    
    }
};