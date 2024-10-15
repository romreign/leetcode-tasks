class RandomizedSet {
    unordered_map<int, int> mp;
    vector<int> v;
public:
    RandomizedSet() = default;

    bool find(int val) {
        if (mp.find(val) != mp.end())
            return true;
        return false;
    }
    
    bool insert(int val) {
        if (find(val))
            return false;
        v.push_back(val);
        mp[val] = v.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (!find(val))
            return false;
        auto index = mp[val];
        mp[v[v.size() - 1]] = index;
        swap(v[index], v[v.size() - 1]);
        v.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */