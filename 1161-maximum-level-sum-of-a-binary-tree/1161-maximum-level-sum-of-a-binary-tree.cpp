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
    int maxLevelSum(TreeNode* root) {
     int idx=0,counter=0;
        long long sum=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            counter++;
            int n=q.size();
            long long temp=0;
            for(int i=0;i<n;i++){
                TreeNode*top=q.front();
                q.pop();
                temp+=top->val;
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }
            if(temp>sum){
                idx=counter;
                sum=temp;
            }
        }
        return idx;
    }
};