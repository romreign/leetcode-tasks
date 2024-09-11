class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string de_address = "";
        for (auto i = 0; i < address.length(); i++)
        {
            if (address[i] == '.') de_address += "[.]";
            else de_address += address[i];
        }
        return de_address;
    }
};