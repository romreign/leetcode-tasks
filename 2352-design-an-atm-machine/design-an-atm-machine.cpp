class ATM {
    vector<int> banknote;
    vector<int> notes;
public:
    ATM() {
        banknote = vector<int> {20, 50, 100, 200, 500};
        notes = vector<int> (5, 0);
    }
    
    void deposit(vector<int> banknotesCount) {
        for (auto i = 0; i < banknotesCount.size(); i++)
            notes[i] += banknotesCount[i];
    }
    
    vector<int> withdraw(int amount) {
        vector<int> result(5, 0);
        for (int i = notes.size() - 1; i >= 0; --i) {
            if (amount == 0)
                break;
            auto count = amount / banknote[i];
            count = count > notes[i] ? notes[i] : count;
            result[i] = count;
            amount -= result[i] * banknote[i];
        }
        if (amount > 0)
            return {-1};
        for (auto i = 0; i < notes.size(); i++) {
            notes[i] -= result[i];
        }
        return result;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */