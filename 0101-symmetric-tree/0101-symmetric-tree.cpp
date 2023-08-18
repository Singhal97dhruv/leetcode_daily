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
    
//     bool recurse(TreeNode*p,TreeNode*q){
//         if(!p && !q)return true;
//         if(!p || !q)return false;
//         if(p->val!=q->val)return false;
//         return recurse(p->left,q->right)&& recurse(p->right,q->left);
        
//     }
    
    bool dfs(TreeNode*p,TreeNode*q){
        if(!p && !q)return true;
        if(!p || !q || p->val!=q->val) return false;
        return dfs(p->left,q->right)&& dfs(p->right,q->left);
    }
    
    
//     bool dfs(TreeNode*p,TreeNode*q){
//         if(!p && !q) return true;
//         if(!p ||!q || p->val!=q->val)return false;
//         return dfs(p->left,q->right)&& dfs(p->right,q->left);
//     }
    
    bool isSymmetric(TreeNode* root) {
        
        // queue<TreeNode*>q1,q2;
        // q1.push(root->left),q2.push(root->right);
        // while(!q1.empty() && !q2.empty()){
        //     auto left=q1.front();
        //     q1.pop();
        //     auto right=q2.front();
        //     q2.pop();
        //     if(left==NULL && right==NULL)continue;
        //     if(left==NULL || right==NULL)return false;
        //     if(left->val!=right->val)return false;
        //     q1.push(left->left);
        //     q1.push(left->right);
        //     q2.push(right->right);
        //     q2.push(right->left);
        // }
        // return true;
        // return recurse(root->left,root->right);
        return dfs(root->left,root->right);
    }
};