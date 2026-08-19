/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isSymmetric(root *TreeNode) bool {
    if root == nil {
        return true
    }

    var dfs func(left *TreeNode, right *TreeNode) bool
    dfs = func(left *TreeNode, right *TreeNode) bool {
        if left == nil && right == nil {
            return true
        }

        if left == nil || right == nil {
            return false
        }

        if left.Val != right.Val {
            return false
        }

        return dfs(left.Left, right.Right) && dfs(right.Left, left.Right)
    }

    return dfs(root.Left, root.Right)
}