/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
    var prev *ListNode = nil
    curr := head

    for curr != nil {
        tmp := curr
        curr = curr.Next
        tmp.Next = prev
        prev = tmp
    }

    return prev
}