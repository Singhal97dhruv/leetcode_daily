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
    public int dfs(TreeNode t,int sum){
        if(t==null)return 0;
        sum=sum*2 + t.val;
        if(t.left==null && t.right==null)return sum;
        return dfs(t.left,sum)+dfs(t.right,sum);
    }
    public int sumRootToLeaf(TreeNode root) {
        int sum=0;
        return dfs(root,sum);
    }
}