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
    void sumOfLeftLeaves(TreeNode* root, int& s) {
        if (!root)
            return;
        if (root && root->left && !root->left->left && !root->left->right)
            s += root->left->val;
        sumOfLeftLeaves(root->left, s);
        sumOfLeftLeaves(root->right, s);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int s = 0;
        sumOfLeftLeaves(root, s);
        return s;
    }
};