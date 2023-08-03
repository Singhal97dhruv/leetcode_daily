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
    
    unordered_map<int,TreeNode*>par;
    void setParent(TreeNode*t,TreeNode*prev){
        if(!t)return;
        par[t->val]=prev;
        setParent(t->left,t);
        setParent(t->right,t);
    }
    
    
    unordered_set<int>vis;
    vector<int>res;
    
    void dfs(TreeNode*t,int k){
        
        if(vis.find(t->val)!=vis.end())return;
        vis.insert(t->val);

        if(k==0){
            res.push_back(t->val);
            return;
        }
        
        if(t->left){
            dfs(t->left,k-1);
        }
        if(t->right){
            dfs(t->right,k-1);
        }
        if(par[t->val]!=NULL){
            dfs(par[t->val],k-1);
        }
        
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        setParent(root,NULL);
        dfs(target,k);
        return res;
    }
};