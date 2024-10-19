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
    float getVal(ListNode* l) {
        if (!l)
            return numeric_limits<float>::infinity();
        return l->val;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dh {};
        auto* cur = &dh;
        while (l1 || l2) {
            if (getVal(l1) < getVal(l2)) {
                cur->next = l1;
                l1 = l1->next;
            }
            else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        return dh.next;
    }
};