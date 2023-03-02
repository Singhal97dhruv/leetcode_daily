/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        if(!root)return "";
        
        return to_string(root->val)+"-"+serialize(root->left)+serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        stringstream ss(data);
        string item;
        TreeNode*root=NULL;
        while(getline(ss,item,'-')){
            root=dfs(root,stoi(item));
        }
        return root;
    }
    TreeNode*dfs(TreeNode*t,int val){
        if(t==NULL){
            TreeNode*n=new TreeNode(val);
            return n;
        }
        if(val<t->val){
             t->left=dfs(t->left,val);
        }
        else{
            t->right=dfs(t->right,val);
        }
        return t;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;