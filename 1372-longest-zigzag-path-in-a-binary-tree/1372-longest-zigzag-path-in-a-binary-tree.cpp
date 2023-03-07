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
    int mx=0;
    void ziggy(TreeNode*t,bool isLeft,int currStep){
        if(!t)return ;
        mx=max(mx,currStep);
        if(isLeft){
            ziggy(t->left,false,currStep+1);
            ziggy(t->right,true,1);
        }
        else{
            ziggy(t->right,true,currStep+1);
            ziggy(t->left,false,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        ziggy(root,true,0);
        ziggy(root,false,0);
        return mx;
    }
};