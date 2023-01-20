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
    int sum=0;
    int dfs(TreeNode*t){
        if(t==NULL)return 0;
        
        int l=dfs(t->left);
        int r=dfs(t->right);
        sum+=abs(l-r);
        return l+r+t->val;
        
    }
    
    int findTilt(TreeNode* root) {
        dfs(root);
        return sum;
    }
};