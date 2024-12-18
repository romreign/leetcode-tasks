class RandomizedSet {
public:
    vector<int> buffer;
    unordered_map<int,int> val_index;

    bool find(int val) {
        return val_index.find(val) != val_index.end();
    }

    bool insert(int val) {
        if (find(val))
            return false;
        buffer.push_back(val);
        val_index[val] = buffer.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (!find(val))
            return false;
        auto i = val_index[val];
        val_index[buffer[buffer.size() - 1]] = i;
        swap(buffer[i], buffer[buffer.size() - 1]);
        val_index.erase(val);
        buffer.pop_back();
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