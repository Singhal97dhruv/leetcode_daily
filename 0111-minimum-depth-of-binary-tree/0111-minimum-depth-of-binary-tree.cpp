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
    int check(TreeNode*ptr){
        if(ptr==NULL)return 0;
        if(ptr->left && ptr->right==NULL)
            return check(ptr->left)+1;
        else if(ptr->right && ptr->left==NULL)
            return check(ptr->right)+1;
        int x=check(ptr->left)+1;
        int y=check(ptr->right)+1;
        return min(x,y);
    }

    
    int minDepth(TreeNode* root) {
        return check(root);
    }
};