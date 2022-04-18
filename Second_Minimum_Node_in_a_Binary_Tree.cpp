Given a non-empty special binary tree consisting of nodes with the non-negative value, where each node in this tree has exactly two or zero sub-node. If the node has two sub-nodes, then this node's value is the smaller value among its two sub-nodes. More formally, the property root.val = min(root.left.val, root.right.val) always holds.

Given such a binary tree, you need to output the second minimum value in the set made of all the nodes' value in the whole tree.

If no such second minimum value exists, output -1 instead.

 
  class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        inorder(root,s);
       if( s.size()<2)  return -1;
        return *next(s.begin(),1);
    }
    void inorder(TreeNode*root,set<int>&s){
        if(root==NULL)return;
        inorder(root->left,s);
        s.insert(root->val);
        inorder(root->right,s);
    }
};
