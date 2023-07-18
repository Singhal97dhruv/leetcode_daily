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
    // vector<vector<int>>vect;
    //  void traverse(TreeNode*tree,int i){
    //      if(tree==NULL)return;
    //      if(i==vect.size())vect.resize(i+1);
    //      vect[i].push_back(tree->val);
    //      traverse(tree->left,i+1);
    //    traverse(tree->right,i+1);  
    //  }
    
    vector<vector<int>>res;
    
    void traverse(TreeNode*root,int lev){
        if(!root)return ;
        if(lev==res.size())res.resize(lev+1);
        res[lev].push_back(root->val);
        traverse(root->left,lev+1);
        traverse(root->right,lev+1);
        
    }
    
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
//         // vect.resize(3);
//         traverse(root,0);
        
//         return vect;
        
        //ITERATION APPROACH BY SINGHAL SAAB
//         if(!root)return {};
//         vector<vector<int>>res;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//             int n=q.size();
//             vector<int>temp;
//             for(int i=0;i<n;i++){
//                 TreeNode* top=q.front();
//                 temp.push_back(top->val);q.pop();
//                 if(top->left)q.push(top->left);
//                 if(top->right)q.push(top->right);
//             }
//             res.push_back(temp);
//         }
//         return res;
        // if(!root)return {};
        // traverse (root,0);
        // return res;
        if(!root)return {};
        queue<TreeNode*>q;
        vector<vector<int>>res;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode*t=q.front();q.pop();
                temp.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            res.push_back(temp);
        }
        return res;
        
        
    }
};