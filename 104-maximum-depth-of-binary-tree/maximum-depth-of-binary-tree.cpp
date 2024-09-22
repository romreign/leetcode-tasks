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
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        auto maxD = 0;
        stack<pair<TreeNode*, int>> s;
        s.push({root, 1});
        while (!s.empty())
        {
            auto [m_root, D] = s.top();
            s.pop();
            if (m_root)
            {
                s.push({m_root->left, D + 1});
                s.push({m_root->right, D + 1});
                maxD = max(maxD, D);
            }
        }
        return maxD;
    }
};