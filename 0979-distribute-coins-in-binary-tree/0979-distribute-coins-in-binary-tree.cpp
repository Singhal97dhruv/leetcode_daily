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
    
    int postorder(TreeNode*t,int &moves){
        if(!t)return 0;
        int l=postorder(t->left,moves),r=postorder(t->right,moves);
        moves+=abs(l)+abs(r);
        return t->val+r+l-1;
        
    }
    
    int distributeCoins(TreeNode* root) {
        int moves=0;
        postorder(root,moves);
        return moves;
    }
};