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
    int mx=0;
    public void ziggy(TreeNode t,boolean isLeft,int currStep){
        if(t==null)return ;
        mx=Math.max(mx,currStep);
        if(isLeft==true){
            ziggy(t.left,false,currStep+1);
            ziggy(t.right,true,1);
        }
        else{
            ziggy(t.right,true,currStep+1);
            ziggy(t.left,false,1);
        }
    }
    public int longestZigZag(TreeNode root) {
        ziggy(root,true,0);
        ziggy(root,false,0);
        return mx;
        
    }
}