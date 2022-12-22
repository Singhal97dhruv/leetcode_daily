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
    
    int dfs(TreeNode*t){
        if(t==NULL)return -1;
        return 1+max(dfs(t->left),dfs(t->right));
    }
    
public:
    vector<vector<string>> printTree(TreeNode* root) {
        int height=dfs(root);
        int cols=pow(2,height+1)-1;
        vector<vector<string>>res(height+1,vector<string>(cols));
        cout<<height<<" "<<cols;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,cols}});
        int idx=-1;
            while(!q.empty()){
                idx++;
                int n=q.size();
                for(int i=0;i<n;i++){
                pair<TreeNode*,pair<int,int>>pi=q.front();
                    q.pop();
                    TreeNode*t=pi.first;
                    int l=pi.second.first,r=pi.second.second;
                    int mid=l+(r-l)/2;
                    res[idx][mid]=to_string(t->val);
                    if(t->left){
                        q.push({t->left,{l,mid}});
                    }
                    if(t->right){
                        q.push({t->right,{mid,r}});
                    }
                }
            }
        return res;
    }
};