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
    
    bool postOrder(TreeNode*t){
        
        if(!t->left && !t->right)return t->val;
        
        bool left=postOrder(t->left);
        bool right=postOrder(t->right);
        if(t->val==2)
            return left||right;
        return left && right;
        
    }
    
    bool evaluateTree(TreeNode* root) {
        return postOrder(root);
    }
};