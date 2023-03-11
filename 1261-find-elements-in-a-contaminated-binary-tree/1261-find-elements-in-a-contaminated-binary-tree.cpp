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
class FindElements {
public:
    unordered_map<int,int>map;
//     void dfs(TreeNode*t){
//         if(t->left){
//             t->left->val=2*t->val+1;
//             map[t->left->val]++;
//             dfs(t->left);
//         }
//         if(t->right){
//             t->right->val=2*t->val+2;
//             map[t->right->val]++;
//             dfs(t->right);
//         }
        
//     }
    
    FindElements(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        root->val=0;
        map[0]++;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*t=q.front();q.pop();
                if(t->left){
                     t->left->val=2*t->val+1;
                    q.push(t->left);
                    map[t->left->val]++;
                }
                if(t->right){
                     t->right->val=2*t->val+2;
                    q.push(t->right);
                    map[t->right->val]++;
                }
            }
        }
        
        
        // root->val=0;
        // map[0]++;
        // dfs(root);
    }
    
    bool find(int target) {
        if(map[target]>0)return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */