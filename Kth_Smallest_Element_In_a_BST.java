Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.
  
  
class Solution {
    int res,count;
    public int kthSmallest(TreeNode root, int k) {
        count=k;
        inorder(root);
        return res;
    }
    void inorder(TreeNode root){
        if(root ==null) return ;
        inorder(root.left);
        if(--count==0) res=root.val;
        inorder(root.right);
    }
}
