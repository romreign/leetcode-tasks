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
    void sumOfLeftLeaves(TreeNode* r, int& s) {
        if (!r)
            return;
        if (r->left && !r->left->left && !r->left->right)
            s += r->left->val;
        sumOfLeftLeaves(r->left, s);
        sumOfLeftLeaves(r->right, s);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s = 0;
        sumOfLeftLeaves(root, s);
        return s;
    }
};