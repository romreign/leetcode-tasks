class RandomizedSet {
public:
    vector<int> buffer;
    unordered_map<int, int> mp;

    bool find(int& val) {
        return mp.contains(val);
    }

    bool insert(int val) {
        if(find(val))
            return false;
        buffer.push_back(val);
        mp[val] = buffer.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(!find(val))
            return false;

        auto it = mp[val];
        swap(buffer[it], buffer[buffer.size() - 1]);
        mp[buffer[it]] = it;
        buffer.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        return buffer[rand() % buffer.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */