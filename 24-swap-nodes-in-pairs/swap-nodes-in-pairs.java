/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null)
            return head;
            
        ListNode dummy = new ListNode(0);
        ListNode curr = dummy;
        ListNode first = head;
        ListNode second = head;

        while (first != null && first.next != null) {
            ListNode tmp = first.next.next;
            second = first.next;
            first.next = tmp;
            second.next = first;
            curr.next = second;
            curr = first;
            first = tmp;
        }
        return dummy.next;
    }
}