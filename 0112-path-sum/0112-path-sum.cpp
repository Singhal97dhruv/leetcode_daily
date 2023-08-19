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
    
    bool dfs(TreeNode*t,int tar,int sum){
        if(!t)return false;
        if(!t->left && !t->right){
            if(sum+t->val==tar)return true;
            return false;
        }
        
        bool ans;
        ans=dfs(t->left,tar,sum+t->val);
        ans=ans|| dfs(t->right,tar,sum+t->val);
        return ans;
        
    }
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return dfs(root,targetSum,0);
        
    }
};