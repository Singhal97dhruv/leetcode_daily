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
    TreeNode* sortedArrayToBST(vector<int>& num) {
//         if(num.size() == 0) return NULL;
//         if(num.size() == 1)
//         {
//             return new TreeNode(num[0]);
//         }
        
//         int middle = num.size()/2;
//         TreeNode* root = new TreeNode(num[middle]);
        
//         vector<int> leftInts(num.begin(), num.begin()+middle);
//         vector<int> rightInts(num.begin()+middle+1, num.end());
        
//         root->left = sortedArrayToBST(leftInts);
//         root->right = sortedArrayToBST(rightInts);
        
//         return root;
        
        if(num.size()==0)return NULL;
        if(num.size()==1)return new TreeNode(num[0]);
        
        int mid=num.size()/2;
        TreeNode*t=new TreeNode(num[mid]);
        vector<int>leftSub(num.begin(),num.begin()+mid);
        vector<int>rightSub(num.begin()+mid+1,num.end());
        
        t->left=sortedArrayToBST(leftSub);
        t->right=sortedArrayToBST(rightSub);
        
        return t;
        
    }
};