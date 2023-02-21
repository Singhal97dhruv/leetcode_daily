class Solution {
    public int countNodes(int[] left,int[] right, int root){
        if(root==-1)return 0;
        return 1+countNodes(left,right,left[root])+countNodes(left,right,right[root]);
    }
    public boolean validateBinaryTreeNodes(int n, int[] leftChild, int[] rightChild) {
        int[] vis=new int[n];
        int root=-1;
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
}