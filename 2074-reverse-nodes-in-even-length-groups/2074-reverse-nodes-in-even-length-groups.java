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
    int k=1;
    public ListNode reverse(ListNode start,ListNode end){
        ListNode front=start,ptr=start,back=null;
        while(front!=end){
            front=front.next;
            ptr.next=back;
            back=ptr;
            ptr=front;
        }
        return back;
    }
    
    public ListNode reverseEvenLengthGroups(ListNode head) {
        ListNode node=head,prev=null;
        for(int i=0;i<k;i++){
            if(node==null){
                if(i%2==0){
                    return reverse(head,node);
                }
                return head;
            }
            prev=node;
            node=node.next;
        }
    
        if(k%2!=0){
            k++;
            prev.next=reverseEvenLengthGroups(node);
            return head;
        }
        k++;
        ListNode nNode=reverse(head,node);
        head.next=reverseEvenLengthGroups(node);
        return nNode;
    }
}