class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for (auto i = 1; i < intervals.size(); i++) {
            if (max(intervals[i][0], result[result.size() - 1][0]) 
                    <= min(intervals[i][1], result[result.size() - 1][1])) 
                result[result.size() - 1] = 
                    {min(intervals[i][0], result[result.size() - 1][0]), 
                        max(intervals[i][1], result[result.size() - 1][1])};
            else
                result.push_back(intervals[i]);
        }
        return result;
    }
};