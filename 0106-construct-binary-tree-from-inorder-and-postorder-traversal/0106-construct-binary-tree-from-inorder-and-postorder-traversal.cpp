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
    TreeNode* inpo(vector<int>&in,int x,int y,vector<int>&po,int a,int b){
        if(x>y||a>b)return NULL;
        TreeNode*t=new TreeNode(po[b]);
        int p=x;
        while(t->val!=in[p])p++;
        t->left=inpo(in,x,p-1,po,a,a+p-x-1);
        t->right=inpo(in,p+1,y,po,a+p-x,b-1);
        return t;

        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return inpo(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
};