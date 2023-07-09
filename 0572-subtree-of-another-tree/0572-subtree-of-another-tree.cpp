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
//     void elements(TreeNode*ptr,vector<int>&ele){
//         if(ptr==NULL)return;
//         ele.push_back(ptr->val);
//         elements(ptr->left,ele);
//         elements(ptr->right,ele);
//     }
    
//     bool match(vector<int>ref1,vector<int>ref2){
//         if(ref1.size()!=ref2.size())return false;
//         for(int i=0;i<ref1.size();i++){
//             if(ref1[i]!=ref2[i])return false;
//         }
//         return true;
//     }
    
//     bool isValid(TreeNode*ptr1,TreeNode*ptr2){
//         queue<TreeNode*>q1,q2;
//         q1.push(ptr1),q2.push(ptr2);
//         while(q1.size() && q2.size()){
//             int m=q1.size(),n=q2.size();
//             for(int i=0;i<m && i<n;i++){
//                 auto p1=q1.front();
//                 auto p2=q2.front();
//                 q1.pop(),q2.pop();
//                 if(p1->val!=p2->val)return false;
//                 if(p1->left && p2->left){
//                     q1.push(p1->left);
//                     cout<<p1->left->val;
//                     q2.push(p2->left);
//                                         // cout<<p2->left->val;

//                 }
//                 else if(p1->left || p2->left)return false;
                
//                 if(p1->right && p2->right){
//                     q1.push(p1->right);
//                                         // cout<<p1->right->val;


//                     q2.push(p2->right);
//                     // cout<<p2->right->val;
//                 }
//                                 else if(p1->right || p2->right)return false;

                
//             }
//         }
//         // cout<<q1.size()<<" "<<q2.size();
//         if(q1.size()!=q2.size())return false;
//         return true;
//     }
    
  
//     bool isSame(TreeNode*r,TreeNode*s){
//         if(!r && !s)return true;
//         if(!r || !s)return false;
//         return r->val==s->val && isSame(r->left,s->left)&& isSame(r->right,s->right);
//     }
    
    bool isSame(TreeNode*l,TreeNode*s){
        if(!l && !s)return true;
        if(!l || !s) return false;
        return (l->val==s->val && isSame(l->left,s->left) && isSame(l->right,s->right));
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // vector<int>ref;
        // elements(subRoot,ref);
//         queue<TreeNode*>q;
//         q.push(root);
//         while(q.size()){
//             int n=q.size();
//             for(int i=0;i<n;i++){
//                 auto p=q.front();
//                 q.pop();
//                 if(p->val==subRoot->val){
//                     if(isValid(p,subRoot))return true;
//                     // return false;
                    
                    
                    
//                 }
//                 if(p->left)q.push(p->left);
//                 if(p->right)q.push(p->right);
                
//             }
//         }
//         return false;
        
//         if(!root)return false;
        
//         return (root->val==subRoot->val && isSame(root,subRoot))|| isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
        
        if(root==NULL)return false;
        return (root->val==subRoot->val && isSame(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot));
        
        
    }
};