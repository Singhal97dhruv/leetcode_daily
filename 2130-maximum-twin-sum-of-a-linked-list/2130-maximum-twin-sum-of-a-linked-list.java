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
    public int pairSum(ListNode head) {
        int mx=0;
       ListNode slow,fast;
        slow=fast=head;
        while(fast!=null && fast.next!=null){
            fast=fast.next.next;
            slow=slow.next;
        }
        ListNode ptr,fwd;
        ptr=null;
        while(slow!=null){
            fwd=slow.next;
            slow.next=ptr;
            ptr=slow;
            slow=fwd;
        
        }
        while(ptr!=null){
            mx=Math.max(mx,ptr.val+head.val);
            head=head.next;
            ptr=ptr.next;
        }
        return mx;
        
    }
}