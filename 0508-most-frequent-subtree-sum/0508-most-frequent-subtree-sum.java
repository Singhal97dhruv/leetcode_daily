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
    Map<Integer,Integer>map=new HashMap<>();int mx=0;
    public int dfs(TreeNode t){
        if(t==null)return 0;
        int sum=dfs(t.left)+dfs(t.right)+t.val;
        map.put(sum,map.getOrDefault(sum,0)+1);
        mx=Math.max(mx,map.get(sum));
        return sum;
    }
    
    public int[] findFrequentTreeSum(TreeNode root) {
        dfs(root);
        List<Integer>res=new ArrayList();
        for(int s: map.keySet()){
            if(mx==map.get(s)){
                res.add(s);
            }
        }
        return res.stream().mapToInt(i->i).toArray();
    }
}