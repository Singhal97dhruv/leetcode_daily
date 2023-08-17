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
    
    int depth(TreeNode*t){
        if(!t)return 0;
        return 1+max(depth(t->left),depth(t->right));
    }
    
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
    //     int lval=maxDepth(root->left);
    //     int rval=maxDepth(root->right);////////////DFs appraoch
    //     if(lval>rval){
    //         return lval+1;
    //     }
    //     else{
    //         return rval+1;
    //     }
    // queue<TreeNode*>q;
    //     q.push(root);
    //     int res=0;
    //     while(!q.empty()){
    //         res++;
    //         int n;
    //         for(int i=0,n=q.size();i<n;i++){
    //             TreeNode *curr=q.front();
    //             q.pop();
    //             if(curr->left!=NULL){
    //                 q.push(curr->left);
    //             }
    //             if(curr->right!=NULL){
    //                 q.push(curr->right);
    //             }
    //         }
    //     }
    // return res;
        
//         int cnt=0;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int n=q.size();
//             cnt++;
//             for(int i=0;i<n;i++){
//                 TreeNode*t=q.front();q.pop();
//                 if(t->left)q.push(t->left);
//                 if(t->right)q.push(t->right);
//             }
            
            
//         }
//         return cnt;
        if(!root)return 0;
        return depth(root);
        
    }
};