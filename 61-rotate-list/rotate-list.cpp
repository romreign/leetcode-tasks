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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;
        ListNode* prev = nullptr, *cur = head;
        int count = 1;
        while (cur->next)
        {
            cur = cur->next;
            count++;
        }
        if (k % count == 0) return head;
        else
        {
            cur->next = head;
            cur = head;
            for (auto i = 0; i < count - (k % count) ; i++)
            {
                prev = cur;
                cur = cur->next;
            }
            prev->next = nullptr;
        }
        return cur;
    }
};