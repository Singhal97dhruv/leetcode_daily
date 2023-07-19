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
    
    
  TreeNode*lca(TreeNode*root,TreeNode*p,TreeNode*q){
      if(!root)return NULL;
      if(root==p || root==q)return root;
      TreeNode*p1=lca(root->left,p,q);
      TreeNode*p2=lca(root->right,p,q);
      if(p1 && p2)return root;
      if(p1==NULL && p2==NULL)return NULL;
      return p1?p1:p2;
  }
    
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      return lca(root,p,q);  
    }
};