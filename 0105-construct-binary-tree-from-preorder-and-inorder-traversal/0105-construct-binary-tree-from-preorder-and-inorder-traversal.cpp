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
    
    TreeNode*build(vector<int>&pre,vector<int>&in,int &rootIdx,int left ,int right){
        
        if(left>right)return NULL;
        int p=map[pre[rootIdx]];
        rootIdx++;
        TreeNode*t=new TreeNode(in[p]);
        t->left=build(pre,in,rootIdx,left,p-1);
        t->right=build(pre,in,rootIdx,p+1,right);
        return t;
        
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        int rootIdx=0;        
        return build(preorder,inorder,rootIdx,0,inorder.size()-1);
        
        
    }
};