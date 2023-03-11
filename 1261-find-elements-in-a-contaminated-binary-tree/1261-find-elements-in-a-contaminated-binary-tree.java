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
class FindElements {
    Map<Integer,Integer>map=new HashMap<>();
    public FindElements(TreeNode root) {
     Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        root.val=0;
        map.put(root.val,map.getOrDefault(root.val,0)+1);
        while(!q.isEmpty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode t=q.poll();
                if(t.left!=null){
                     t.left.val=2*t.val+1;
                    q.add(t.left);
                     map.put(t.left.val,map.getOrDefault(t.left.val,0)+1);
                }
                if(t.right!=null){
                    t.right.val=2*t.val+2;
                    q.add(t.right);
                     map.put(t.right.val,map.getOrDefault(t.right.val,0)+1);
                }
            }
        }
        
    }
    
    public boolean find(int target) {
        if(map.getOrDefault(target,0)>0)return true;
        return false;
    }
}

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements obj = new FindElements(root);
 * boolean param_1 = obj.find(target);
 */