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
    
    bool dfs(TreeNode*t,int curr_sum,int target){
        
        if(!t)return false;
        if(!t->left && !t->right){
            if(curr_sum+t->val>=target)return true;
            return false;
        }
        
        

        bool left=dfs(t->left,curr_sum+t->val,target);
        
        bool right=dfs(t->right,curr_sum+t->val,target);

        if(left==false)t->left=NULL;
        if(right==false)t->right=NULL;
        if(left||right)return true;
        return false;
    }
    
    
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
    return   dfs(root,0,limit)==false?NULL:root;
    }
};