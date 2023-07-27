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
//     vector<vector<int>>ans;
//     void dfs(TreeNode*ptr,int curr_sum,int target,vector<int>temp){
//         if(ptr==NULL)return;
//         if((ptr->val + curr_sum==target) && ptr->left==NULL && ptr->right==NULL)
//         {
//             temp.push_back(ptr->val);
//             ans.push_back(temp);
//         }
//         else{
//             temp.push_back(ptr->val);
//             dfs(ptr->left,curr_sum+ptr->val,target,temp);
//             dfs(ptr->right,curr_sum+ptr->val,target,temp);

//         }
//     }
    
    vector<vector<int>>res;
    void dfs(TreeNode*t,int target,int currSum,vector<int>&temp){
               
        if(!t)return;
        
        temp.push_back(t->val);
        currSum+=t->val;
        if(!t->left && !t->right && currSum==target)res.push_back(temp);
        dfs(t->left,target,currSum,temp);
        dfs(t->right,target,currSum,temp);
        temp.pop_back();
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        // dfs(root,0,targetSum,{});
        // return ans;
        vector<int>vect;
        dfs(root,targetSum,0,vect);
        return res;
        
    }
};