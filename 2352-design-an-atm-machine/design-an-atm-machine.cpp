class ATM {
    vector<int> banknotes;
    vector<int> nominal;
public:
    ATM() {
        banknotes = vector<int>{0, 0, 0, 0, 0};
        nominal = vector<int>{20, 50, 100, 200, 500};
    }
    
    void deposit(vector<int> banknotesCount) {
        for (auto i = 0; i < banknotesCount.size(); i++)
            banknotes.at(i) += banknotesCount.at(i);
    }
    
    vector<int> withdraw(int amount) {
        vector<int> result{0, 0, 0, 0, 0};
    
        for (int i = banknotes.size() - 1; i >= 0; i--)
        {
            if (amount == 0)
                break;

            auto count = amount / nominal.at(i);
            result.at(i) = min(count, banknotes.at(i));
            amount -= (result.at(i) * nominal.at(i));
        }
        
        if (amount > 0)
            return {-1};

        for (auto i = 0; i < banknotes.size(); i++)
            banknotes.at(i) -= result.at(i);

        return result; 
        return{};
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */