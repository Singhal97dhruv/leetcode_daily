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
    // vector<int>pre;
    // void preorder(TreeNode*t){
    //     if(t){
    //         pre.push_back(t->val);
    //         preorder(t->left);
    //         preorder(t->right);
    //     }
    // }
    
    vector<int> preorderTraversal(TreeNode* root) {
        // preorder(root);
        vector<int>pre;
        stack<TreeNode*>st;
        while(root || !st.empty()){
          if(root){
            pre.push_back(root->val);
            if(root->right){
                st.push(root->right);
            }
            root=root->left;
          }
              else{
                root=st.top();st.pop();
            }
        }
        
        return pre;
    }
};