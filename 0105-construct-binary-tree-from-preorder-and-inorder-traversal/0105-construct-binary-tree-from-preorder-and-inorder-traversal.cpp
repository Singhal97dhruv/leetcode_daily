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
    
    unordered_map<int,int>map;
    
    TreeNode*build(vector<int>&pre,vector<int>&in,int &RootIdx,int left,int right){
        
        if(left>right)return NULL;
        
        int idx=map[pre[RootIdx++]];
        TreeNode*t=new TreeNode(in[idx]);
        
        t->left=build(pre,in,RootIdx,left,idx-1);
        t->right=build(pre,in,RootIdx,idx+1,right);
        
        return t;
    }    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        int RootIdx=0;
        return build(preorder,inorder,RootIdx,0,preorder.size()-1);
    }
};