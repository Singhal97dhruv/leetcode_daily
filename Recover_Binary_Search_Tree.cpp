You are given the root of a binary search tree (BST), where the values of exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

 
  class Solution {
public:
    TreeNode*curr1=NULL;
    TreeNode*curr2=NULL;
    TreeNode*prev=new TreeNode(INT_MIN);
    
    void recoverTree(TreeNode* root) {
    inorder(root);
        swap(curr1->val,curr2->val);
    }
    void inorder(TreeNode*root){
        if(root==NULL)return ;
        inorder(root->left);
        if(curr1==NULL && prev->val>root->val){
            curr1=prev;
            
        }
        if(curr1!=NULL && prev->val>root->val){
            curr2=root;
        }
        prev=root;
        inorder(root->right);
    }
    
};
