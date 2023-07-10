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
    // bool isvalid(TreeNode*rt,TreeNode*mn,TreeNode*mx){
    //     if(rt==NULL)return true;
    //     if(mn && rt->val<=mn->val || mx && rt->val>=mx->val)
    //         return false;
    //     return isvalid(rt->left,mn,rt) && isvalid(rt->right,rt,mx);
    // }
    

    bool isValid(TreeNode*t,TreeNode*mn,TreeNode*mx){
        if(!t)return true;
        
        if(mn && t->val<=mn->val || mx && t->val>=mx->val)return false;
        
        return isValid(t->left,mn,t)&&isValid(t->right,t,mx);
        
    }
    
    
    bool isValidBST(TreeNode* root) {
        return isValid(root,NULL,NULL);   
    }
};