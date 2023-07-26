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
//     int glob_mx=INT_MIN;
//     int recur(TreeNode*root){
//         if(!root)return 0;
        
//         int left=recur(root->left);
//         int right=recur(root->right);
        
//         int this_mx=max(max(left,right)+root->val,root->val);
//         int mx=max(this_mx,left+right+root->val);
//         glob_mx=max(mx,glob_mx);
//         return this_mx;
        
        
        
//     }
    
    int ans=INT_MIN;
    int dfs(TreeNode*t){
        if(!t)return 0;
        
        int left=dfs(t->left);
        int right=dfs(t->right);
        
        int tempMx=
        ans=max({ans,max(left,right)+t->val,t->val,t->val+left+right});
        
        return max({t->val+max(left,right),t->val});
        
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        dfs(root);
        return ans;
        
    }
};