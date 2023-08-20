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
    int tempMn=-1;
    // void dfs(TreeNode*t,int &pre){
    //     if(!t)return;
    //     dfs(t->left,pre);
    //     if(pre!=-1)mn=min(mn,t->val-pre);
    //     pre=t->val;
    //     dfs(t->right,pre);
    // }
    
    void inorderTraversal(TreeNode*t){
        if(!t)return ;
        inorderTraversal(t->left);
        
        if(tempMn!=-1){
            mn=min(mn,t->val-tempMn);
            
        }
        tempMn=max(t->val,tempMn);
        inorderTraversal (t->right);

        
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        inorderTraversal(root);
        return mn;
    }
};