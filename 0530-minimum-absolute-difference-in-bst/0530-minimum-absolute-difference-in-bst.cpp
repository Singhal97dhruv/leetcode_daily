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
    int mn=INT_MAX;
    void dfs(TreeNode*t,int &pre){
        if(!t)return;
        dfs(t->left,pre);
        if(pre!=-1)mn=min(mn,t->val-pre);
        pre=t->val;
        dfs(t->right,pre);
    }
    int getMinimumDifference(TreeNode* root) {
        int pre=-1;
        dfs(root,pre);
        return mn;
    }
};