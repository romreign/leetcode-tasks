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
    bool isNullVector(vector<ListNode*>& lists)
    {
        for (auto i = 0; i < lists.size(); i++)
            if (lists[i])
                return false;
        return true;
    }
    void deleteNullIter(vector<ListNode*>& lists)
    {
        for (auto i = 0; i < lists.size(); i++)
            if (!lists[i])
            {
                lists.erase(lists.begin()+i);
                i--;
            }
    }
    float getVal(ListNode* head)
    {
        if (!head)
            return numeric_limits<float>::infinity();
        return head->val;
    }
    int nextNode(vector<ListNode*>& lists)
    {
        int index_min_val = 0;
        for (auto i = 0; i < lists.size(); i++)
            if (getVal(lists[i]) < getVal(lists[index_min_val]))
                index_min_val = i;
        return index_min_val;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto* dummyNode = new ListNode{0, nullptr};
        auto curr = dummyNode;
        while(lists.size())
        {
            auto index_min_val = nextNode(lists);
            curr->next = lists[index_min_val];
            if (!isNullVector(lists))
                lists[index_min_val] = lists[index_min_val]->next;
            curr = curr->next;
            deleteNullIter(lists);
        }
        return dummyNode->next;
    }
};