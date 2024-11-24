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
    int isBalanced(TreeNode* root, bool& balance) {
        if (!root) return 0;
        auto hl = isBalanced(root->left, balance);
        auto hr = isBalanced(root->right, balance);
        if (abs(hl - hr) > 1)
            balance = false;
        return max(hl, hr) + 1;
    }
    bool isBalanced(TreeNode* root) {
        bool flag = true;
        isBalanced(root, flag);
        return flag;
    }
};