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
unordered_map<int,int>map;
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
int root_idx=0;
for(int i=0;i<inorder.size();i++){
map[inorder[i]]=i;
}
return recur(preorder,inorder,  root_idx,0,inorder.size()-1);
}
TreeNode*recur(vector<int>preorder,vector<int>inorder,int &root_idx,int left,int right){
if(left>right)return NULL;
int pivot=map[preorder[root_idx]];
// while(inorder[pivot]!=preorder[root_idx])pivot++;
root_idx++;
TreeNode*new_node=new TreeNode(inorder[pivot]);
new_node->left=recur(preorder,inorder,root_idx,left,pivot-1);
new_node->right=recur(preorder,inorder,root_idx,pivot+1,right);
return new_node;
}
**};