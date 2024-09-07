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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        TreeNode* curr = root;
        stack<TreeNode*> st;
        TreeNode* last = nullptr;
        while (curr || !st.empty())
        {
            while(curr)
            {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            if (!curr->right || last == curr->right)
            {
                result.push_back(curr->val);
                st.pop();
                last = curr;
                curr = nullptr;
            }
            else
            {
                curr = curr->right;
            }
        }
        return result;
    }
};