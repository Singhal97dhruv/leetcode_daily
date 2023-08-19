/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
int result=0;
void dfs(TreeNode*ptr,int k){
if(!ptr->left && !ptr->right){
result+=10*k+ptr->val;
return ;
}
if(ptr->left)
dfs(ptr->left,10*k + ptr->val);
if(ptr->right)
dfs(ptr->right,10*k + ptr->val);
​
}
int sumNumbers(TreeNode* root) {
dfs(root,0);
return result;
}
};