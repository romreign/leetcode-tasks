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
    ListNode* preMiddleNode(ListNode* head)
    {
        auto slow = head, fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        auto curr = head;
        ListNode* prev = nullptr;
        while(curr)
        {
            auto next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) 
    {
        auto tmp = preMiddleNode(head);
        auto p2 = reverse(tmp->next);
        tmp->next = nullptr;
        auto p1 = head;
        while (p2) {
            auto p1_next = p1->next;
            p1->next = p2;
            p1 = p2;
            p2 = p1_next;
        } 
    }
};