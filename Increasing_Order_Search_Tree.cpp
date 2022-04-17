Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only one right child.

 
  class Solution {
public:
    vector<int>vect;
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode*temp=new TreeNode(),*res=temp;
        inorder(root);
        for(int i:vect){
            temp->right=new TreeNode(i);
            temp=temp->right;
        }
        return res->right;
    }
    void inorder(TreeNode*root){
        if(root){
            inorder(root->left);
            vect.push_back(root->val);
            inorder(root->right);
        }
    }
};
