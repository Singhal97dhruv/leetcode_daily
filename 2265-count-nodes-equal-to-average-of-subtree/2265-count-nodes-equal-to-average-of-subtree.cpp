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
    int ans=0;
    pair<int,int>solve(TreeNode*ptr){
        if(ptr==NULL)
            return {0,0};
        auto lft=solve(ptr->left);
        int l_sum=lft.first;
        int l_count=lft.second;
        auto rgt=solve(ptr->right);
        int r_sum=rgt.first;
        int r_count=rgt.second;
        
        int sum=l_sum+r_sum+ptr->val;
        int count=l_count+r_count+1;
        if((sum/count)==ptr->val)ans++;
        return {sum,count};
    }
    
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};