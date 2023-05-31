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
    int dfs(TreeNode*t,int curr_sum){
        if(!t)return 0;
        curr_sum=curr_sum*2+t->val;
        if(!t->left && !t->right)return curr_sum;
        return dfs(t->left,curr_sum)+dfs(t->right,curr_sum);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int curr_sum=0;
        return dfs(root,curr_sum);
    }
};