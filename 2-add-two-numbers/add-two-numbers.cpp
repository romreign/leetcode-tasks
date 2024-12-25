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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy{0};
        ListNode* ptr_dummy = &dummy;
        int ost = 0;

        while(l1 || l2 || ost) {
            if (l1) {
                ost += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                ost += l2->val;
                l2 = l2->next;
            }

            ptr_dummy->next = new ListNode{ost % 10};
            ptr_dummy = ptr_dummy->next;
            ost /= 10;
        }
        return dummy.next;
    }
};