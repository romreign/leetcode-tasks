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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        auto* curr = head;
        
        while(curr && curr->next) {
            ListNode* new_node = new ListNode{gcd(curr->val, curr->next->val), curr->next};
            curr->next = new_node;
            curr = new_node->next;
        }
        return head;
    }
};