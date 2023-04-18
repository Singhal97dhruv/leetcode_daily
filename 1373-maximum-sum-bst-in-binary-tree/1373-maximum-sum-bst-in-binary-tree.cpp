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
    
    class Tree{
        public:
        bool isBst;
        int mx;
        int mn;
        int sum;
        Tree(){
            isBst=true;
            mx=INT_MIN;
            mn=INT_MAX;
            sum=0;
        }
    };
    
public:
    int ans=0;
    Tree postOrder(TreeNode*t){
        if(!t)return Tree();
        
        Tree root;
        Tree l=postOrder(t->left);
        Tree r=postOrder(t->right);
        
        if(l.isBst==true && r.isBst==true && l.mx<t->val && r.mn>t->val){
            root.isBst=true;
            root.mn=min(t->val,l.mn);
            root.mx=max(t->val,r.mx);
            root.sum=l.sum+r.sum+t->val;
        }
        else{
            root.isBst=false;
            root.sum=0;
            
        }
        ans=max(ans,root.sum);
        return root;
        
    }
    
    
    int maxSumBST(TreeNode* root) {
        postOrder(root);
        return ans;
    }
};