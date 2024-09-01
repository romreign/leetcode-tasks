/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> um;
        while(head)
        {
            if(um.find(head) != um.end()) return true;
            um[head] = true;
            head = head->next;
        }
        return false;
        
    }
};