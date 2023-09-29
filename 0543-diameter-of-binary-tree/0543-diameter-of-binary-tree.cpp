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
    int ans=0;
    
    int dfs(TreeNode*t){
//         if(!t)return 0;
        
//         int left=dfs(t->left);
//         int right=dfs(t->right);
        
//         ans=max(ans,abs(left+right));
        
//         return 1+max(left,right);
        
        if(!t)return 0;
        int left=dfs(t->left);
        int right=dfs(t->right);
        
        ans=max(ans,left+right);
        return 1+max(left,right);
        
    } 
    
    int diameterOfBinaryTree(TreeNode* root) {
         dfs(root);
        return ans;
    }
};