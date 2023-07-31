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
    
    int dfs(TreeNode*t,int tar,long currSum){
        if(!t)return 0;
        return (currSum+t->val==tar) + dfs(t->left,tar,currSum+t->val)+ dfs(t->right,tar,currSum+t->val);
    }
    
    
    int pathSum(TreeNode* root, int targetSum) {
        // if(root==NULL)return 0;
        // return dfs(root,0,targetSum)+ pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
        
        if(!root)return 0;
        return dfs(root,targetSum,0)+ pathSum(root->left,targetSum)+ pathSum(root->right,targetSum);
        
    // int dfs(TreeNode*ptr,long curr_sum,int target){
    //     if(ptr){
    //         return (curr_sum+ptr->val==target)+dfs(ptr->left,curr_sum+ptr->val,target)+dfs(ptr->right,curr_sum+ptr->val,target);
    //     }
    //     return NULL;
    }
};