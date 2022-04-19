You are given the root of a binary search tree (BST), where the values of exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

 
  class Solution {
    TreeNode curr1=null,curr2=null;
    TreeNode prev=new TreeNode(Integer.MIN_VALUE);
    public void recoverTree(TreeNode root) {
        inorder(root);
        int temp=curr1.val;
        curr1.val=curr2.val;
        curr2.val=temp;
        // Collections.swap(curr1.val,curr2.val);
    }
    public void inorder(TreeNode root){
if(root==null)return ;
        inorder(root.left);
        if(curr1==null && prev.val>root.val) 
            curr1=prev;
        if(curr1!=null && prev.val>root.val)
            curr2=root;
        prev=root;
        inorder(root.right);
    }
}
