/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func rangeSumBST(root *TreeNode, low int, high int) int {
     if root == nil {
        return 0
    }

    left := rangeSumBST(root.Left, low, high)
    right := rangeSumBST(root.Right, low, high)

    sum := left + right
    if root.Val >= low && root.Val <= high {
        sum += root.Val
    }
    
    return sum
}