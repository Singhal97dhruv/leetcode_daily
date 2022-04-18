Given a non-empty special binary tree consisting of nodes with the non-negative value, where each node in this tree has exactly two or zero sub-node. If the node has two sub-nodes, then this node's value is the smaller value among its two sub-nodes. More formally, the property root.val = min(root.left.val, root.right.val) always holds.

Given such a binary tree, you need to output the second minimum value in the set made of all the nodes' value in the whole tree.

If no such second minimum value exists, output -1 instead.

 
  class Solution {
    public int findSecondMinimumValue(TreeNode root) {
        if(root==null) return -1;
        if(root.left==null && root.right==null)return -1;
        int left=root.left.val;
        int right=root.right.val;
        if(root.val==left){
            left=findSecondMinimumValue(root.left);
        }
        if(root.val==right){
            right=findSecondMinimumValue(root.right);
        }
        if(left!=-1 && right!=-1){
            return Math.min(left,right);
        }
        else if(left!=-1)return left;
        else return right;
    }
}
