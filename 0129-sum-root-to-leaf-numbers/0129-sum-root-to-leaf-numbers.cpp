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
    
    int ans=0;
    
    void sum(TreeNode*t,int num){
        if(!t)return;
        if(!t->left && !t->right){
            ans+=num*10+t->val;
            return;
        }
        sum(t->left,num*10+t->val);
        sum(t->right,num*10+t->val);
    }
    
    int sumNumbers(TreeNode* root) {
       
        sum(root,0);
        return ans;
    }
};