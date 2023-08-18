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
    TreeNode*build(int left,int right,vector<int>&ino,vector<int>& post,int&k){
        
        //Base condition
        if(left>right)return NULL;
        
        TreeNode*t= new TreeNode(post[k]);
        
        int Idx=map[post[k--]];
        t->right=build(Idx+1,right,ino,post,k);
        t->left=build(left,Idx-1,ino,post,k);
        return t;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     
        for(int i=inorder.size()-1;i>=0;i--){
            map[inorder[i]]=i;
        }
        int k=postorder.size()-1;
        return build(0,postorder.size()-1,inorder,postorder,k);
        
    }
};