class RandomizedSet {
    unordered_map<int, int> mp;
    vector<int> vec;
public:
    RandomizedSet() = default;
    
    bool search (int val){
        if (mp.find(val) != mp.end())
            return true;
        return false;
    }

    bool insert(int val) {
        if (search(val))
            return false;
        vec.push_back(val);
        mp[val] = vec.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (search(val) == false)
            return false;
        auto index = mp[val];
        vec[index] = vec[vec.size() - 1];
        mp[vec[index]] = index;   
        vec.pop_back();
        mp.erase(val);    
        return true;
    }
    
    int getRandom() {
        return vec[rand()%vec.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */