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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         if(!root)return {};
//         vector<vector<int>>res;
//         queue<TreeNode*>q;
//         q.push(root);
//         int n,idx=0;
//         while(q.size()){
//             n=q.size();
            
//             vector<int>temp(n);

//             for(int i=0;i<n;i++){
//             auto top=q.front();q.pop();
//                 if(!idx)
//                 temp[i]=top->val;
//                 else
//                 temp[n-i-1]=top->val;
//                 if(top->left)q.push(top->left);
//                 if(top->right)q.push(top->right);
//             }

//             idx=!idx;
//             res.push_back(temp);

            // if(idx%2==0)
            // for(int i=0;i<n;i++){
            // auto top=q.front();q.pop();
            //     temp.push_back(top->val);
            //     if(top->left)q.push(top->left);
            //     if(top->right)q.push(top->right);
            // }
            // else
            // for(int i=0;i<n;i++){
            // auto top=q.front();q.pop();
            //     temp.emplace(temp.begin(),top->val);
            //     if(top->left)q.push(top->left);
            //     if(top->right)q.push(top->right);
            // }
            // idx++;
            // res.push_back(temp);
            if(!root)return {};
            queue<TreeNode*>q;
            q.push(root);
            int dirn=1;
            vector<vector<int>>res;
            while(!q.empty()){
                int n=q.size();
                vector<int>temp(n);
                    
                    for(int i=0;i<n;i++){
                        TreeNode*t=q.front();q.pop();
                        if(dirn==1){
                            temp[i]=t->val;
                        }
                        else{
                            temp[n-i-1]=t->val;
                        }
                        if(t->left)q.push(t->left);
                        if(t->right)q.push(t->right);
                    }
                    res.push_back(temp);
                dirn*=-1;
                }
        return res;
    }
};