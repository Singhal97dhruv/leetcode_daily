class Solution {
public:
    vector<int>offset={0,1,0,-1,0};
    int dfs(int i,int j,vector<vector<int>>&mat,vector<vector<int>>&ref){
        
        if(ref[i][j])return ref[i][j];
        
        ref[i][j]=1;
        for(int k=0;k<4;k++){
            int newX=i+offset[k],newY=j+offset[k+1];
            if(newX<0 || newY<0 || newX>=mat.size() || newY>=mat[0].size() || mat[newX][newY]<=mat[i][j])continue;
            ref[i][j]=max(ref[i][j],1+dfs(newX,newY,mat,ref));
        }
        return ref[i][j];
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        vector<vector<int>>ref(matrix.size(),vector<int>(matrix[0].size()));
        int res=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(!ref[i][j]){
                  ref[i][j]=dfs(i,j,matrix,ref);  
                }
                res=max(res,ref[i][j]);
            }
        }
        return res;
        
    }
};