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
    unordered_map<string,vector<TreeNode*>>map;
    string dfs(TreeNode*t){
        if(!t)return "";
        string s="("+dfs(t->left)+to_string(t->val)+dfs(t->right)+")";
        map[s].push_back(t);
        return s;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        vector<TreeNode*>ans;
        
        for(auto s:map){
            if(s.second.size()>1)ans.push_back(s.second[0]);
        }
        return ans;
    }
};