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
    int is_height_balanced(TreeNode* root, bool& flag)
    {
        if (!root)
            return 0;
        int leftH = is_height_balanced(root->left, flag);
        int rightH = is_height_balanced(root->right, flag);
        
        if (abs(leftH - rightH) > 1)
            flag = false;

        return max(leftH,rightH) + 1;
    }
    bool isBalanced(TreeNode* root) {
        bool is_balanced = true;
        is_height_balanced(root, is_balanced);
        return is_balanced;
    }
};