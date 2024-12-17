class RecentCounter {
public:
    vector<int> buf;
    
    int ping(int t) {
        int c = 0;
        buf.push_back(t);
        for (auto n : buf)
            if (t - 3000 <= n && n <= t)
                c++;
        return c;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */