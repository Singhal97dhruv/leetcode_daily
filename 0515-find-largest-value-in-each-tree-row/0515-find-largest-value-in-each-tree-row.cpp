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
    vector<int>res;
    void dfs(TreeNode*ptr,int idx){
        if(ptr==NULL)return;

        if(res.size()<idx+1)res.push_back(ptr->val);
        else{
            if(ptr->val>res[idx])res[idx]=ptr->val;
        }

        dfs(ptr->left,idx+1);
        dfs(ptr->right,idx+1);

    }

    vector<int> largestValues(TreeNode* root) {

        // vector<int>res;
        // queue<TreeNode*>q;
        // if(root)
        // q.push(root);
        // while(q.size()){
        //     int mx=INT_MIN;
        //     int n=q.size();
        //     for(int i=0;i<n;i++){
        //         auto top=q.front();
        //         q.pop();
        //         top->val>mx?mx=top->val:mx;
        //         if(top->left)q.push(top->left);
        //         if(top->right)q.push(top->right);
        //     }
        //     res.push_back(mx);
        // }
        // return res;

        dfs(root,0);
        return res;
        
    }
};