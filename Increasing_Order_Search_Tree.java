Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only one right child.

 class Solution {
    ArrayList<Integer>arr=new ArrayList<>();
    public TreeNode increasingBST(TreeNode root) {
        TreeNode curr=new TreeNode();
        TreeNode res=curr;
        inorder(root);
        for(int i:arr){
            curr.right=new TreeNode(i);
            curr=curr.right;
            
        }
        return res.right;
    }
    void inorder(TreeNode root){
        if(root!=null){
            inorder(root.left);
            arr.add(root.val);
            inorder(root.right);
        }
    }
}
