class Solution {
public:
    void sorted(vector<vector<int>>& intervals)
    {
        for (auto i = 0; i < intervals.size(); i++)
            for (auto j = 0; j < intervals.size() - 1 - i; j++)
                if (intervals[j][0] > intervals[j + 1][0])
                    swap(intervals[j], intervals[j + 1]);
    }

    bool intersection(vector<int> first, vector<int> second)
    {
        return max(first[0], second[0]) <= min(first[1], second[1]);
    }

    vector<int> unification(vector<int> first, vector<int> second)
    {
        return {first[0], (max(first[1], second[1]))};
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sorted(intervals);
        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for(auto i = 1; i < intervals.size(); i++)
        {
            if (intersection(intervals[i], result[result.size() - 1]))
                result[result.size() - 1] = unification(result[result.size() - 1], intervals[i]);
            else
                result.push_back(intervals[i]);
        }
        return result;
    }
};