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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length{};
        auto* dummy = new ListNode{0, head};
        auto curr = dummy;
        while(curr != nullptr)
        {
            length++;
            curr = curr->next;
        }
        curr = dummy;
        for (auto i = 0; i < length - n - 1; i++)
            curr = curr->next;
        curr->next = curr->next->next;
        return dummy->next;
    }
};