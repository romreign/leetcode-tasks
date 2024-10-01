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
    float getVal(ListNode* head)
    {
        if (!head)
            return numeric_limits<float>::infinity();
        return head->val;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        auto dummyNode = new ListNode{0, nullptr};
        auto curr = dummyNode;
        while(list1 || list2)
        {
            if (getVal(list1) > getVal(list2))
            {
                curr->next = list2;
                list2 = list2->next;
            }
            else
            {
                curr->next = list1;
                list1 = list1->next;
            }
            curr = curr->next;
        }
        return dummyNode->next;
    }
};