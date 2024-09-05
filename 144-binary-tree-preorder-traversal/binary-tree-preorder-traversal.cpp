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
    vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> root_values;
        if (!root) return root_values;
        stack<TreeNode*> root_stack;
        root_stack.push(root);
        while (!root_stack.empty())
        {
            TreeNode* curr = root_stack.top();
            root_stack.pop();
            root_values.push_back(curr->val);
            if (curr->right)
                root_stack.push(curr->right);
            if (curr->left)
                root_stack.push(curr->left);
        }
        return root_values;
    }
};