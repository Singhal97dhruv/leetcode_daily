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
    
   unordered_map<int,TreeNode*>pars; 
    
    void traverse(TreeNode*t,TreeNode*p){
       if(!t)return;
        pars[t->val]=p;
        traverse(t->left,t);
        traverse(t->right,t);
    }
    
    void dfs(TreeNode*t,int k,unordered_set<TreeNode*>vis,vector<int>&res){
        if(vis.find(t)!=vis.end())return;
            vis.insert(t);
        if(k==0){
            res.push_back(t->val);
            return;
        }
        if(t->left){
            dfs(t->left,k-1,vis,res);
        }
        if(t->right){
            dfs(t->right,k-1,vis,res);
        }
        if(pars[t->val]){
            dfs(pars[t->val],k-1,vis,res);
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>res;
        traverse(root,NULL);
        unordered_set<TreeNode*>vis;
        dfs(target,k,vis,res);
        return res;
        
    }
    
    
    
};