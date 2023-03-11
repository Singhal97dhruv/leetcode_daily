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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>map;
        unordered_map<int,int>forRoot;
        for(int i=0;i<descriptions.size();i++){
            TreeNode*p,*c;
            if(map.find(descriptions[i][0])!=map.end())p=map[descriptions[i][0]];
            else{
                p=new TreeNode(descriptions[i][0]);
                map[descriptions[i][0]]=p;
            }
           if(map.find(descriptions[i][1])!=map.end())c=map[descriptions[i][1]];
            else{
            c=new TreeNode(descriptions[i][1]);
                map[descriptions[i][1]]=c;
            }
            if(descriptions[i][2]==1)p->left=c;
            else p->right=c;
            
            forRoot[descriptions[i][1]]++;
        }
        int ans;
        for(auto i:descriptions){
            if(forRoot.find(i[0])==forRoot.end()){ans=i[0];break;}
        }
        cout<<ans;
        return map[ans];
    }
};