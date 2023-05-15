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
    
    
    public ListNode reverse(ListNode start,ListNode end){
        ListNode front=start,last=null,ptr=start;
        while(front!=end){
            front=front.next;
            ptr.next=last;
            last=ptr;
            ptr=front;
        }
        return last;
    }
    
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode node=head;
        for(int i=0;i<k;i++){
            if(node==null)return head;
            node=node.next;
        }
        ListNode Nnode=reverse(head,node);
        head.next=reverseKGroup(node,k);
        return Nnode;
        
    }
}