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
    TreeNode*tar;
    int countNodes(TreeNode*t){
        if(!t)return 0;

        return 1+countNodes(t->left)+countNodes(t->right);
    }
    
    void findNode(TreeNode*t,int x){
        if(t){
            if(t->val==x){
                tar=t;return;
            }
            findNode(t->left,x);
            findNode(t->right,x);
        }
    }
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        int cntNodes=0;
        findNode(root,x);
        int lc=0,rc=0;
        lc=countNodes(tar->left);
        rc=countNodes(tar->right);
        cntNodes=max(lc,rc);
        if(tar!=root){
            int temp=n-lc-rc-1;
            cntNodes=max(temp,cntNodes);
        }
        return cntNodes>n-cntNodes;
        
        
    }
};