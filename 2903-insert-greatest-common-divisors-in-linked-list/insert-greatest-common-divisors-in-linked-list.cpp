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
    int NOD(int num1, int num2) {
        while (num1 != 0 && num2 != 0) {
            if (num1 >= num2)
                num1 = num1 % num2;
            else
                num2 = num2 % num1;
        }
        return num1 + num2;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        auto* curr = head;
        
        while(curr && curr->next) {
            int tmp_val = NOD(curr->val, curr->next->val);
            ListNode* new_node = new ListNode{tmp_val};
            new_node->next = curr->next;
            curr->next = new_node;
            curr = new_node->next;
        }
        return head;
    }
};