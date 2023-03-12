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
    TreeNode res=null;
    int depth=0;
    public TreeNode subtreeWithAllDeepest(TreeNode root) {
        dfs(root,0);
        return res;
    }
    public int dfs(TreeNode t,int level){
        if(t==null)return level;
        int left=dfs(t.left,level+1);
        int right=dfs(t.right,level+1);
        int curr=Math.max(left,right);
        depth=Math.max(depth,curr);
        if(left==depth && right==depth)
            res=t;
        return curr;
    }
}
