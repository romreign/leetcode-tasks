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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return nullptr;
        if (!head->next && head->val == val) return nullptr;
        ListNode* first = head;
        ListNode* second = first->next;
        ListNode* result = head;
        while(second)
        {
            if (result == first && first->val == val)
            {
                first->next = nullptr;
                first = second;
                result = first;
            }
            else if (second->val != val)
            {
                first->next = second;
                first = second;
            }
            second = second->next;
        }
        first->next = nullptr;
        if (first->val == val) 
            return nullptr;
        return result;
    }
};