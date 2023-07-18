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
    
    int Balance(TreeNode*t)
    {
        if(!t)return 0;
        int l= Balance(t->left);
        int r= Balance(t->right);
        if(l==-1 || r==-1 || abs(l-r)>=2)return -1;
        return 1+max(l,r);
    }
    
    bool isBalanced(TreeNode* root) {
        int n=Balance(root);
        if(n==-1)return false;
        return true;
    }
};