/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    // TreeNode*lca(TreeNode*root,TreeNode*p,TreeNode*q){
    //     if(root==NULL)return NULL;
    //     if(root==p || root==q)return root;
    //     TreeNode*parent1=lca(root->left,p,q);
    //     TreeNode*parent2=lca(root->right,p,q);
    //     if(parent1 && parent2)return root;
    //     if(parent1==NULL && parent2==NULL)return NULL;
    //     return parent1?parent1:parent2;
    // }
    
    
    TreeNode*lca(TreeNode*root,TreeNode*l,TreeNode*r){
        if(!root)return NULL;
        if(root==l ||root==r)return root;
        TreeNode*left=lca(root->left,l,r);
        TreeNode*right=lca(root->right,l,r);
        if(left && right)return root;
        if(!left && !right)return NULL;
        return left?left:right;
    }
    
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      return lca(root,p,q);  
    }
};