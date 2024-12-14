class RecentCounter {
public:
    vector<int> buffer;
    
    int ping(int t) {
        int count = 0;
        buffer.push_back(t);
        for (auto i = 0; i < buffer.size(); i++)
            if (buffer[i] >= t - 3000 && buffer[i] <= t)
                count++;
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */