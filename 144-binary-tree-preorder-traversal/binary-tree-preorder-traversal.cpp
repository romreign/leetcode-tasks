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
        if(!root) return {};
        vector<int> result;
        function<void(TreeNode*)> fun = [&](TreeNode* root)
        {
            if (!root) return;
            result.push_back(root->val);
            fun(root->left);
            fun(root->right);
        };
        fun(root);
        return result;
    }
};