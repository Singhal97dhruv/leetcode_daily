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
    int sum=0;
    public void dfs(TreeNode t,int k){
        if(t==null)return;
        k=k*10+t.val;
        if(t.left==null && t.right==null){
            sum+=k;
            return;}
        dfs(t.left,k);
        dfs(t.right,k);
    }
    
    public int sumNumbers(TreeNode root) {
        dfs(root,0);
        return sum;
    }
}