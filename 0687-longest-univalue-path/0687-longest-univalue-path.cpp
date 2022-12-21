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
    int dfs(TreeNode*t,int &mx)
    {
        int lft=t->left?dfs(t->left,mx):0;
        int rgt=t->right?dfs(t->right,mx):0;
        int temp_left=t->left && t->left->val==t->val?lft+1:0;
        int temp_right=t->right && t->right->val==t->val?rgt+1:0;
        mx=max(mx,temp_left+temp_right);
        return max(temp_left,temp_right);
        
    }  
    
    int longestUnivaluePath(TreeNode* root) {
        if(!root)return 0;
        int mx=0;
        dfs(root,mx);
        return mx;
    }
};