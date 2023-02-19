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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>>res=new ArrayList<>();
        if(root==null)return res;

        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        boolean idx=false;
        while(q.size()>0){
            int n=q.size();
            List<Integer>l=new ArrayList<>();
            for(int i=0;i<n;i++){
                TreeNode node=q.poll();
                if(idx)
                    l.add(0,node.val);
                else
                    l.add(node.val);
                if(node.left!=null)q.add(node.left);
                if(node.right!=null)q.add(node.right);
                
            }
            idx=!idx;
            res.add(l);
        }
        return res;
        
        
    }
}