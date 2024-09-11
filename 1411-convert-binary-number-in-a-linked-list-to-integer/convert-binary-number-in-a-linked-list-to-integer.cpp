/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::string bin_number = "";
        for (auto* i = head; i != nullptr; i = i->next)
            bin_number += std::to_string(i->val);
        return std::stoi(bin_number, nullptr, 2);
    }
};