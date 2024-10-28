class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int p1 = 0, p2 = 0;
        while (p1 < firstList.size() || p2 < secondList.size()) {
            if (p1 != firstList.size() && p2 != secondList.size()) {
                if (max(firstList[p1][0], secondList[p2][0]) <= min(firstList[p1][1], secondList[p2][1]))
                    ans.push_back({max(firstList[p1][0], secondList[p2][0]), 
                                min(firstList[p1][1], secondList[p2][1])});
                if (firstList[p1][1] > secondList[p2][1])
                    p2++;
                else
                    p1++;
            }
            else if (p1 != firstList.size() && p2 == secondList.size()) 
                p1++;
            else
                p2++;
        }
        return ans;
    }
};