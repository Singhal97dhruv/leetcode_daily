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
    
    void inorder(vector<TreeNode*>&ino,TreeNode*t){
        if(!t)return;
        inorder(ino,t->left);
        ino.push_back(t);
        inorder(ino,t->right);
    }
    TreeNode* balancing(int st,int end,vector<TreeNode*>ino){
        if(st>end)return NULL;
        int mid=st+(end-st)/2;
        TreeNode*t=ino[mid];
        t->left=balancing(st,mid-1,ino);
        t->right=balancing(mid+1,end,ino);
        return t;
    }
    
    
    TreeNode* balanceBST(TreeNode* root) {
        if(!root)return NULL;
        vector<TreeNode*>ino;
        inorder(ino,root);
        return balancing(0,ino.size()-1,ino);
    }
};