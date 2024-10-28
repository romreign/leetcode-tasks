class Solution {
public:

    struct customComparator {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first == b.first) {
            return a.second > b.second; 
        }
        return a.first < b.first; 
    }
};

    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> result;
        unordered_map<string, int> mp;
        priority_queue<pair<int, string>, vector<pair<int, string>>, customComparator> pq;
        int maximum = 0;

        for (auto word : words) 
            mp[word]++;
        
        for (auto p : mp)
            pq.push({p.second,p.first});
        
        for (auto i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result; 
    }
};