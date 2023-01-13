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
    vector<int>ino;
   
    void inorder(TreeNode*t){
        if(t==NULL)return ;
        inorder(t->left);
        ino.push_back(t->val);
        inorder(t->right);
    }
    
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        inorder(root);
        vector<vector<int>>res;
        // for(int i:ino)cout<<i<<" ";

        for(int i:queries){
            int n=lower_bound(ino.begin(),ino.end(),i)-ino.begin();
            if(n<ino.size() && ino[n]==i)res.push_back({i,i});
            else
            {
                if(n==0)res.push_back({-1,ino[0]});
                else if(n==ino.size())res.push_back({ino[ino.size()-1],-1});
                else{
                    res.push_back({ino[n-1],ino[n]});
                }
            }
        }
        
        return res;
    }
};