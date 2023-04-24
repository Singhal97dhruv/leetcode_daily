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
    int largestIdx(vector<int>&nums,int left,int right){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=left;i<right;i++){
            pq.push({nums[i],i});
            if(pq.size()>1)pq.pop();
        }
        return pq.top().second;
    }
    TreeNode* recur(vector<int>&nums,int left,int right){
        if(left==right)return NULL;
        int mxIdx=largestIdx(nums,left,right);
        TreeNode*t=new TreeNode(nums[mxIdx]);
        t->left=recur(nums,left,mxIdx);
        t->right=recur(nums,mxIdx+1,right);
        return t;
    }
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return recur(nums,0,nums.size());
    }
};