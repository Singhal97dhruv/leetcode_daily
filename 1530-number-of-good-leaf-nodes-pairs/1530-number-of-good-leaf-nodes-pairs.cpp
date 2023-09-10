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
    int cnt=0;
    vector<int>post(TreeNode*t,int reqDistance){
        
        if(!t)return {};
        
        vector<int>left=post(t->left,reqDistance);
        vector<int>right=post(t->right,reqDistance);
        
        if(left.size()==0 && right.size()==0)return {1};
        vector<int>toGive;
        
        for(int i=0;i<left.size();i++){
            for(int j=0;j<right.size();j++){
                if(left[i]+right[j]<=reqDistance){
                    cnt++;
                    
                }
            }
        }
        
        for(int i=0;i<left.size();i++){
            left[i]++;
            toGive.push_back(left[i]);
        }
        
        for(int i=0;i<right.size();i++){
            right[i]++;
            toGive.push_back(right[i]);
        }
        
        return toGive;
        
        
    }
    
    int countPairs(TreeNode* root, int distance) {
        
        post(root,distance);
        return cnt;
        
    }
};