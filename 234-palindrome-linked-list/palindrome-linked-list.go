/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func half(head *ListNode) *ListNode {
    slow, fast := head, head 

    for fast != nil && fast.Next != nil {
        slow = slow.Next
        fast = fast.Next.Next
    }

    return slow
}

func reverse(head *ListNode) *ListNode {
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

func isPalindrome(head *ListNode) bool {
    halfNode := half(head)
    reverseHalfNode := reverse(halfNode)

    for reverseHalfNode != nil {
        if head.Val != reverseHalfNode.Val {
            return false
        }

        head = head.Next
        reverseHalfNode = reverseHalfNode.Next
    }

    return true
}