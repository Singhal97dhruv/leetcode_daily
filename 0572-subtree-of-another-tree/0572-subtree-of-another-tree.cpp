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
//     bool isSame(TreeNode*l,TreeNode*s){
//         if(!l && !s)return true;
//         if(!l || !s) return false;
//         return (l->val==s->val && isSame(l->left,s->left) && isSame(l->right,s->right));
//     }
    
    bool isSame(TreeNode*source,TreeNode*target){
        if(!source && !target)return true;
        if(!source || !target)return false;
        
        return (source->val==target->val) && isSame(source->left, target->left) && isSame(source->right,target->right);
        
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // vector<int>ref;
        // elements(subRoot,ref);
//         queue<TreeNode*>q;
//         q.push(root);
//         while(q.size()){
//             int n=q.size();
//             for(int i=0;i<n;i++){
//                 auto p=q.front();
//                 q.pop();
//                 if(p->val==subRoot->val){
//                     if(isValid(p,subRoot))return true;
//                     // return false;
                    
                    
                    
//                 }
//                 if(p->left)q.push(p->left);
//                 if(p->right)q.push(p->right);
                
//             }
//         }
//         return false;
        
//         if(!root)return false;
        
//         return (root->val==subRoot->val && isSame(root,subRoot))|| isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
        
//         if(root==NULL)return false;
//         return (root->val==subRoot->val && isSame(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot));
        
        if(!root)return false;
        return (root->val==subRoot->val && isSame(root,subRoot)) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot); 
    }
};