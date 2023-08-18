/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    
//     Node*helper(Node*R){
//         if(!R)return NULL;
//         if(R->left)return R->left;
//         if(R->right)return R->right;
        
//         return helper(R->next);
        
//     }
    
//     void connectNexts(Node*root){
//         if(!root)return;
//          if(root->left)
//         {
//             if(root->right){
//                 root->left->next=root->right;
//             }
//             else{
//                 root->left->next=helper(root->next);
//             }
//         }
        
//         if(root->right){
//             root->right->next=helper(root->next);
//         }
        
//         connectNexts(root->right);
//         connectNexts(root->left);
//     }
    
    Node* connect(Node* root) {
        // Node*now=root,*head=NULL,*tail=NULL;
        // while(now){
        //     if(now->left){
        //         if(tail)tail=tail->next=now->left;
        //         else head=tail=now->left;
        //     }
        //     if(now->right){
        //         if(tail)tail=tail->next=now->right;
        //         else head=tail=now->right;
        //     }
        //     if(!(now=now->next)){
        //         now=head;
        //         head=tail=NULL;
        //     }
        // }
        // return root;
        
        
        
      //   connectNexts(root);
      // return root;
        
        
        Node*now=root,*head=NULL,*tail=NULL;
        while(now){
            if(now->left){
                if(tail)tail=tail->next=now->left;
                else head=tail=now->left;
            }
            if(now->right){
                if(tail)tail=tail->next=now->right;
                else head=tail=now->right;
            }
            if(!(now=now->next)){
                now=head;
                head=tail=NULL;
            }
        }
        return root;
    }
};