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
    
    TreeNode* recursion(TreeNode*t,int tar){
        if(!t)return NULL;
        t->left=recursion(t->left,tar);
        t->right=recursion(t->right,tar);
        if(t->val==tar && t->left==t->right)return NULL;return t;
    }
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return recursion(root,target);
    }
};