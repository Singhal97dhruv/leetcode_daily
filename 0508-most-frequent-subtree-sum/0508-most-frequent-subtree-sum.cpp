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
    unordered_map<int,int>map;int mx=0;
    int dfs(TreeNode*t){
        if(!t)return 0;
        int sum=dfs(t->left)+dfs(t->right)+t->val;
        mx=max(mx,++map[sum]);
        return sum;
        
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int>res;
        for(auto m:map){
            if(mx==m.second){
                res.push_back(m.first);                
            }
        }
        return res;
    }
};