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
    
    // TreeNode*reverse(TreeNode*t){
    //     if(!t)return NULL;
    //     TreeNode*ptr=t->left;
    //     t->left=reverse(t->right);
    //     t->right=reverse(ptr);
    //     return t;
    // }
    
    TreeNode* invertTree(TreeNode* root) {
        // if(root==NULL)return NULL;
        // TreeNode*temp=root->right;
        // root->right=invertTree(root->left);
        // root->left=invertTree(temp);
        // return root;  
        
        
        // if(!root)return nullptr;
        // TreeNode*t=root->right;
        // root->right=invertTree(root->left);
        // root->left=invertTree(t);
        // return root;
        
        
//         if(!root)return NULL;
//         TreeNode*ptr=root->right;
//         root->right=invertTree(root->left);
//         root->left=invertTree(ptr);
//         return root;
        
        
        // stack<TreeNode*>stk;
        // stk.push(root);
        // while(!stk.empty()){
        //     TreeNode*f=stk.top();stk.pop();
        //     if(f){
        //         stk.push(f->left);
        //         stk.push(f->right);
        //         swap(f->left,f->right);
        //     }
        // }
        
        // return reverse(root);
        stack<TreeNode*>stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode*f=stk.top();stk.pop();
            if(f){
                stk.push(f->left);
                stk.push(f->right);
                swap(f->left,f->right);
            }
        }
        return root;
    }
};