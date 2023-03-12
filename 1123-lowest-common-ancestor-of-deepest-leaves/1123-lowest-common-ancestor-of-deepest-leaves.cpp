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
    int depth=0;
    TreeNode*res=NULL;
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
         postOrder(root,0);
        return res;
    }
    int postOrder(TreeNode*t,int level){
        if(t==NULL)return level;
        int left=postOrder(t->left,level+1);
        int right=postOrder(t->right,level+1);
        int currLevel=max(left,right);
        depth=max(depth,currLevel);
        if(left==depth && right==depth){
            res=t;
        }
        return currLevel;
        
    }
};