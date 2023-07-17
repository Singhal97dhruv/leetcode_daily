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
    vector<int>vect;
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        return find(k);
    }
    
//     void inorder(TreeNode*t){
//         if(!t)return;
//         inorder(t->left);
//         vect.push_back(t->val);
//         inorder(t->right);
//     }
    
//     bool find(int target){
//         int i=0,j=vect.size()-1;
//         int sum;
//         while(i<j){
//             sum=vect[i]+vect[j];
//             if(sum==target)return true;
//             if(sum>target)j--;
//             else i++;
//         }
//         return false;
//     }
    
    
    void inorder(TreeNode*root){
        if(!root)return;
        inorder(root->left);
        vect.push_back(root->val);
        inorder(root->right);
    }
    
    bool find(int target){
        int left=0,right=vect.size()-1;
        while(left<right){
            int sum=vect[left]+vect[right];
            if(target<sum)right--;
            else if(target>sum)left++;
            else return true;
        }
        return false;
    }
    
    
    
};