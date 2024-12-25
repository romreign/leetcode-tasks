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
    float getV(ListNode* l) {
        if (!l)
            return numeric_limits<float>::infinity();
        return l->val;
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy{0};
        ListNode* ptr_dummy = &dummy;

        while(l1 || l2) {
            if(getV(l1) <= getV(l2)) {
                ptr_dummy->next = l1;
                l1 = l1->next;
            }
            else {
                ptr_dummy->next = l2;
                l2 = l2->next;
            }
            ptr_dummy = ptr_dummy->next;
        }
        return dummy.next; 
    }
};