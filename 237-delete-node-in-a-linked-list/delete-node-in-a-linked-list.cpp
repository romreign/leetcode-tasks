/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr = node;
        ListNode* next = nullptr;
        ListNode* delLast = nullptr;

        while(curr->next)
        {
            next = curr->next;
            curr->val = next->val;
            delLast = curr;
            curr = next;
        }
        curr = nullptr;
        delLast->next = nullptr;
    }
};