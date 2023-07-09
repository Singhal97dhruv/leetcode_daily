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
    
    // void recursion(TreeNode*ptr,int level,vector<int>&v){
    //     if(ptr==NULL)return ;
    //     if(level>v.size()){
    //         v.push_back(ptr->val);
    //     }
    //     // cout<<level<<" ";
    //     recursion(ptr->right,level+1,v);
    //     recursion(ptr->left,level+1,v);
    // }
    
    
    vector<int> rightSideView(TreeNode* root) {
        // vector<int>v;
        // recursion(root,1,v);
        // return v;
        if(!root)return {};
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode*top=q.front();q.pop();
                temp.push_back(top->val);
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }
            res.push_back(temp.back());
        }
        return res;
        
    }
};