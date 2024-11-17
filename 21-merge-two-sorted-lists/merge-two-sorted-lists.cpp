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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummyNode{};
        ListNode* ptr_d = &dummyNode;
        while (list1 || list2) {
            if (getVal(list1) <= getVal(list2)) {
                ptr_d->next = list1;
                list1 = list1->next;
            }
            else {
                ptr_d->next = list2;
                list2 = list2->next;
            }
            ptr_d = ptr_d->next;
        }
        return dummyNode.next;
    }
};