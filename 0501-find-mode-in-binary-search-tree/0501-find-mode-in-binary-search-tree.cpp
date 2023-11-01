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
    int pred=INT_MIN,currFreq=1,mxFreq=0;
    vector<int>res;
   unordered_map<int,int>map;
   
    void inorder(TreeNode*t){
        if(!t)return;
        inorder(t->left);
        if(pred==t->val)currFreq++;
        else currFreq=1;
        if(currFreq>mxFreq)
        {
            mxFreq=currFreq;
            res.clear();
            res.push_back(t->val);
        }
        else if(currFreq==mxFreq){
            res.push_back(t->val);
        }

        pred=t->val;
        inorder(t->right);
        
        
    }
    
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return res;
    }
};