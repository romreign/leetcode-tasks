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
    private float getVal(ListNode l) {
        return l != null ? l.val : Float.POSITIVE_INFINITY;
    }

    private boolean elementsIsNotNull(ListNode[] l) {
        for (int i = 0; i < l.length; i++) 
            if (l[i] != null)
                return true;
        return false;
    }

    private ListNode findMin(ListNode[] l) {
        ListNode min = null;
        int index = 0;
        for (int i = 0; i < l.length; i++) {
            if (getVal(min) >= getVal(l[i])) {
                min = l[i];
                index = i;
            }
        }
        l[index] = l[index].next;
        return min;
    }
    
    public ListNode mergeKLists(ListNode[] lists) {
        ListNode dummy = new ListNode();
        ListNode curr = dummy;

        while (elementsIsNotNull(lists)) {
            curr.next = findMin(lists);
            curr = curr.next;
        }
        return dummy.next;
    }
}