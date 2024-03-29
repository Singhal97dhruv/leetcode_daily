/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // int res;
    // void inorder(TreeNode*t,int &k){
    //     if(!t)return ;
    //     inorder(t->left,k);
    //     if(--k==0)res=t->val;
    //     inorder(t->right,k);
    // }
   
    int ans=-1;
    void inorder(TreeNode*t,int &k){
        if(!t)return;
        
        if(ans!=-1)return;
       

        inorder(t->left,k);
        
          if(--k==0){
            ans=t->val;return;
        }

        
        inorder(t->right,k);

        
        
    
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        
        inorder(root,k);
        return ans;
    }
};