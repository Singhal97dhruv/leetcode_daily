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
    
    public boolean postOrder(TreeNode t){
        if(t.val==0 )return false;
        else if(t.val==1)return true;
        else if(t.val==2)return postOrder(t.left)||postOrder(t.right);
        return postOrder(t.left)&& postOrder(t.right);
    }
    
    public boolean evaluateTree(TreeNode root) {
        return postOrder(root);
    }
}