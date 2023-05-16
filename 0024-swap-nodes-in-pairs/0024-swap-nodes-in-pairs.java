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
        // ListNode p=new ListNode();
        // ListNode temp=p;
        // while(head!=null){
        //     ListNode tmp=head;
        //     head=head.next;
        //     if(head!=null){
        //         p.next=new ListNode(head.val);
        //         p=p.next;
        //         head=head.next;
        //     }
        //     p.next=new ListNode(tmp.val);
        //     p=p.next;
        // }
        // return temp.next;
        if(head==null || head.next==null)return head;
        ListNode dummy=new ListNode();
        ListNode ptr=dummy;
        ListNode curr=head;
        while(curr!=null && curr.next!=null){
            ptr.next=curr.next;
            curr.next=ptr.next.next;
            ptr.next.next=curr;
            ptr=curr;
            curr=curr.next;
        }
        return dummy.next;
        
    }
}