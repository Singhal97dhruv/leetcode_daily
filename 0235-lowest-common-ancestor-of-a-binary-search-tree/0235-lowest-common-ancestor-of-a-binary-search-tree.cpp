/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if ((root -> val > p -> val) && (root -> val > q -> val)) {
        //     return lowestCommonAncestor(root -> left, p, q);
        // }
        // if ((root -> val < p -> val) && (root -> val < q -> val)) {
        //     return lowestCommonAncestor(root -> right, p, q);
        // }
        // return root;

        
        // if(root->val>p->val && root->val>q->val){
        //     return lowestCommonAncestor(root->left,p,q);
        // }
        // if(root->val<p->val && root->val<q->val){
        //     return lowestCommonAncestor(root->right,p,q);
        // }
        // return root;
        
        if(root->val>p->val && root->val>q->val)return lowestCommonAncestor(root->left,p,q);
        else if(root->val<p->val && root->val<q->val)return lowestCommonAncestor(root->right,p,q);
        return root;
        
        
//         queue<TreeNode*>qq;
//         qq.push(root);
//         while(!qq.empty()){
            
//             int n=qq.size();
//             for(int i=0;i<n;i++){

//                 TreeNode*t=qq.front();qq.pop();

//                 if(t->val>p->val && t->val>q->val){
//                     qq.push(t->left);
//                 }
//                 else if(t->val<p->val && t->val<q->val){
//                     qq.push(t->right);
//                 }
//                 else return t;
//             }
            
            
//         }
        
//     return nullptr;
    }
};