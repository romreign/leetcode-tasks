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
    bool isPalindrome(ListNode* head) {
        stack<int> stack_;
        for(auto i = head; i; i = i->next)
            stack_.push(i->val);
        for(auto i = head; i; i = i->next)
        {
            if(i->val != stack_.top())
                return false;
            stack_.pop();
        }
        return true;
    }
};