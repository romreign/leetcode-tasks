/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* l, TreeNode* r)
    {
        if (!l || !r)
            return !l && !r;
        if (l->val != r->val)
            return false;
        return check(l->left, r->left) && check(l->right, r->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p, q);
    }
};