/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
unordered_map<int,TreeNode*>parent;
unordered_set<int>visited;
vector<int>res;
void setParent(TreeNode*node){
if(!node)return ;
if(node->left){
parent[node->left->val]=node;
setParent(node->left);
}
if(node->right){
parent[node->right->val]=node;
setParent(node->right);
}
}
vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
setParent(root);
dfs(target,k);
return res;
}
void dfs(TreeNode*ptr,int k){
if(visited.find(ptr->val)!=visited.end()){
return ;
}
visited.insert(ptr->val);
if(k==0){
res.push_back(ptr->val);
return ;
}
if(ptr->left){
dfs(ptr->left,k-1);
}
if(ptr->right){
dfs(ptr->right,k-1);
}
if(parent[ptr->val])
dfs(parent[ptr->val],k-1);
}
};