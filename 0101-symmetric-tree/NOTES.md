1st iterative approach
​
```
class Solution {
public:
bool isSymmetric(TreeNode* root) {
queue<TreeNode*>q;
q.push(root);
while(!q.empty()){
vector<int>temp;
int n=q.size();
for(int i=0;i<n;i++){
auto top=q.front();
q.pop();
if(top==NULL){
temp.push_back(-101);
continue;
}
temp.push_back(top->val);
q.push(top->left);
q.push(top->right);
}
for(int i=0;i<n/2;i++){
if(temp[i]!=temp[n-i-1])
return false;
}
}
return true;
}
};
```