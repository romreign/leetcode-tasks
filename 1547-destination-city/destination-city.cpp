class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> cities;

        for (auto city : paths) {
            cities.insert(city[0]);
        }

        for (auto city : paths) {
            string to = city[1];
            if (cities.find(to) == cities.end())
                return to;
        }
        return "";
    }
};
