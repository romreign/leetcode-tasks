/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isValidBST(root *TreeNode) bool {
    l := math.MinInt
    r := math.MaxInt

    var dfs func(root *TreeNode, lv, rv int) bool 
    dfs = func(root *TreeNode, lv, rv int) bool {
        if root == nil {
            return true
        }

        if root.Val > lv && root.Val < rv {
            return dfs(root.Left, lv, root.Val) && dfs(root.Right, root.Val, rv)
        }

        return false
    }

    return dfs(root, l, r)
}