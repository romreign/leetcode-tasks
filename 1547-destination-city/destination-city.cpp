class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> st;
        for (auto c : paths)
            st.insert(c[0]);
        for (auto i = 0; i < paths.size(); i++){
            string buf = paths[i][1];
            if (st.find(buf) == st.end())
                return buf;
        }
        return "";
    }
};
