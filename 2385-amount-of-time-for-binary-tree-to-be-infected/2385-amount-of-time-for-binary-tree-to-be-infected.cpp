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
    TreeNode*starting;
    void dfs(TreeNode*t,unordered_map<int,TreeNode*>&par,int target){
        if(!t)return;
        if(t->val==target)starting=t;
        if(t->left){
            par[t->left->val]=t;
            dfs(t->left,par,target);
        }
        if(t->right){
            par[t->right->val]=t;
            dfs(t->right,par,target);
        }
    }
    
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,TreeNode*>par;
        unordered_set<int>vis;
        vis.insert(start);
        dfs(root,par,start);
        int min=-1;
        queue<TreeNode*>q;
        q.push(starting);
        
        cout<<starting->val;
        while(!q.empty()){
            min++;
            int n=q.size();
            for(int i=0;i<n;i++){
                auto top=q.front();
                vis.insert(top->val);
                q.pop();
                if(top->left && vis.find(top->left->val)==vis.end())q.push(top->left);
                if(top->right && vis.find(top->right->val)==vis.end())q.push(top->right);
                if(par[top->val] && vis.find(par[top->val]->val)==vis.end())q.push(par[top->val]);
            }
        }
        return min;
    }
};