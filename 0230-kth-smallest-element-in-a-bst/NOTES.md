int res;
void inorder(TreeNode*t,int &k){
if(!t)return ;
inorder(t->left,k);
if(--k==0)res=t->val;
inorder(t->right,k);
}
int kthSmallest(TreeNode* root, int k) {
inorder(root,k);
return res;
}