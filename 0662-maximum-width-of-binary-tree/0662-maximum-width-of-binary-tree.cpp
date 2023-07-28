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
    int widthOfBinaryTree(TreeNode* root) {
        
        // queue<pair<TreeNode*,int>>q;
        // q.push({root,0});
        // int res=0;
        // while(q.size()){
        //     int sz=q.size();
        //     int firstNodeIdx=q.front().second;
        //     int lastNodeIdx=q.back().second;
        //     res=max(res,lastNodeIdx-firstNodeIdx+1);
        //     for(int i=0;i<sz;i++){
        //         pair<TreeNode*,int>pr=q.front();
        //         q.pop();
        //         int idx=pr.second-firstNodeIdx;
        //         if(pr.first->left){
        //             q.push({pr.first->left,(long long)2*idx+1});
        //         }
        //         if(pr.first->right){
        //             q.push({pr.first->right,(long long)2*idx+2});
        //         }
        //     }
        // }
        // return res;
        
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int res=0;
        while(!q.empty()){
            int n=q.size();
            int LeftNodeIdx=q.front().second;
            int RightNodeIdx=q.back().second;
            int temp=RightNodeIdx-LeftNodeIdx+1;
            res=max(res,temp);
            for(int i=0;i<n;i++){
                auto [node,idx]=q.front();q.pop();
                if(node->left){
                    q.push({node->left,(long long)2*idx+1});
                }
                if(node->right){
                    q.push({node->right,(long long)2*idx+2});
                }
            }
            
        }
        return res;
    }
};