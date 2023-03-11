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
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sortedListToBST(ListNode head) {
        return make(head,null);
    }
    public TreeNode make(ListNode start,ListNode end){
        if(start==end)return null;
        if(start.next==end)return new TreeNode(start.val);
        ListNode s=start,e=start;
        while(e!=end && e.next!=end){
            s=s.next;
            e=e.next.next;
        }
        TreeNode t=new TreeNode(s.val);
        t.left=make(start,s);
        t.right=make(s.next,end);
        return t;
    }
}