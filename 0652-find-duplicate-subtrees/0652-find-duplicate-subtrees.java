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
    Map<String,List<TreeNode>>map=new HashMap<>();
    public String dfs(TreeNode t){
        if(t==null)return "";
        String s="("+dfs(t.left)+t.val+dfs(t.right)+")";
        if(!map.containsKey(s))map.put(s,new ArrayList<TreeNode>());
        map.get(s).add(t);
        return s;
    }
    
    public List<TreeNode> findDuplicateSubtrees(TreeNode root) {
        dfs(root);
        List<TreeNode>res=new ArrayList<>();
        for(List<TreeNode>l:map.values()){
            if(l.size()>1)res.add(l.get(0));
        }
        return res;
    }
}