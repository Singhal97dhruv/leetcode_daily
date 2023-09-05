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
    unordered_map<int,int>l,r,ans;
    
//     TreeNode*r;
    
    int height(TreeNode*t){
        if(!t)return 0;
        
        int lft=height(t->left);
        int rgt=height(t->right);
        l[t->val]=lft;
        r[t->val]=rgt;
        return 1+max(lft,rgt);
        
        return 1+max(height(t->left),height(t->right));
    }
    
    
    void func(TreeNode*t,int TillMax,int depth){
        if(!t)return ;
        
        ans[t->val]=TillMax;
        func(t->left,max(TillMax,depth+r[t->val]),depth+1);
        func(t->right,max(TillMax,depth+l[t->val]),depth+1);

        
        
    }
    
    
//     void dfs(TreeNode*t,unordered_set<int>&set){
//         if(!t)return ;
//         if(t->left && set.find(t->left->val)!=set.end()){
//             TreeNode*tl=t->left;
//             t->left=NULL;
//             int h=height(r);
//             map[tl->val]=h;
//             t->left=tl;
//         }
//         if(t->right && set.find(t->right->val)!=set.end()){
//             TreeNode*tr=t->right;
//             t->right=NULL;
//             int h=height(r);
//             map[tr->val]=h;
//             t->right=tr;
//         }
//         dfs(t->left,set);
//         dfs(t->right,set);
        
//     }
    
    
    
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        // r=root;
        // unordered_set<int>set(queries.begin(),queries.end());
        // dfs(root,set);
        vector<int>res(queries.size());
        // for(int i=0;i<queries.size();i++){
            // ans[i]=map[queries[i]];
        // }
        // unordered_map<int,int>map;
        // return ans;
    
    
        height(root);
        
        func(root->left,r[root->val],1);
        func(root->right,l[root->val],1);
        
        for(int i=0;i<queries.size();i++){
            res[i]=ans[queries[i]];
        }
        return res;
        
       
    }
};