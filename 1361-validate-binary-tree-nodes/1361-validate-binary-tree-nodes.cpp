class Solution {
public:
    int countNodes(vector<int>&left,vector<int>&right,int root){
        if(root==-1)return 0;
        return 1+countNodes(left,right,left[root])+countNodes(left,right,right[root]);
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        
        vector<int>vis(n,0);int root=-1;
        for(int i=0;i<n;i++){
            if(leftChild[i]!=-1 && vis[leftChild[i]]++==1)return false;
            if(rightChild[i]!=-1 && vis[rightChild[i]]++==1)return false;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0)
                if(root==-1)root=i;
                else return false;
        }
        if(root==-1)return false;
        return countNodes(leftChild,rightChild,root)==n;
    }
};