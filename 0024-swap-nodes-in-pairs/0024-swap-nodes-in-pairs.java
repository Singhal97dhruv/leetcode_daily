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
        
        ListNode ptr=head;
        ListNode dummy=new ListNode();
        dummy.next=head;
        ListNode res=dummy;
        
        while(ptr!=null && ptr.next!=null){
            ListNode p=ptr.next;
            ptr=p.next;
            p.next=dummy.next;
            dummy.next=p;
            dummy=p.next;
            dummy.next=ptr;
            
        }
        return res.next;
        
    }
}