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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* start = head;
        ListNode* curr = head->next;
        ListNode* next_num = head;
        ListNode* last_cycle = nullptr;
        int sum = 0;
        while(curr)
        {
            sum += curr->val;
            if(curr->val == 0) 
            {
                next_num->val = sum;
                sum = 0;
                last_cycle = next_num;
                next_num = next_num->next; 
            }
            curr = curr->next;
        }
        last_cycle->next = nullptr;
        return start;
    }
};