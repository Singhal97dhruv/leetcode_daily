class Solution {
public:
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         vector<int>offset={0,1,0,-1,0};
//         queue<pair<int,int>>q;
//         for(int i=0;i<mat.size();i++){
//             for(int j=0;j<mat[0].size();j++){
//                 if(mat[i][j]==0)q.push({i,j});
//                 else mat[i][j]=-1;
//             }
//         }
        
//         while(q.size()){
            
//             auto [r,c]=q.front();q.pop();
            
//             for(int i=0;i<4;i++){
//                 int nr=r+offset[i],nc=c+offset[i+1];
//                 if(nr<0 || nr>=mat.size() || nc<0 || nc>=mat[0].size() || mat[nr][nc]!=-1)continue;
//                 mat[nr][nc]=mat[r][c]+1;
//                 q.push({nr,nc});
//             }
            
            
//         }
//         return mat;
        
       
//         vector<int>offset{0,1,0,-1,0};
//         queue<pair<int,int>>q;
//         for(int i=0;i<mat.size();i++){
//             for(int j=0;j<mat[0].size();j++){
//                 if(mat[i][j]==0)q.push({i,j});
//                 else mat[i][j]=-1;
//             }
//         }
        
//         while(!q.empty()){
//             auto [i,j]=q.front();q.pop();
//             for(int k=0;k<4;k++){
//                 int nr=i+offset[k],nc=j+offset[k+1];
//                 if(nr<0 || nc<0 || nr>=mat.size() || nc>=mat[0].size() || mat[nr][nc]!=-1)continue;
//                 mat[nr][nc]=mat[i][j]+1;
//                 q.push({nr,nc});
//             }
//         }
//         return mat;
        queue<pair<int,int>>q;
        vector<int>offset={0,1,0,-1,0};
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0)q.push({i,j});
                else mat[i][j]=-1;
            }
        }
        while(!q.empty()){
            auto [i,j]=q.front();q.pop();
            for(int k=0;k<4;k++){
                int nr=i+offset[k],nc=j+offset[k+1];
                if(nr<0 || nc<0 || nr>=mat.size() || nc>=mat[0].size() || mat[nr][nc]!=-1)continue;
                mat[nr][nc]=mat[i][j]+1;
                q.push({nr,nc});
            }
        }
        return mat;
    }
};


int dp[200001]={[0 ... 200000]=-1};
int recur(int curr,int tar,int x,int y,int z){
    
    if(curr==tar)return 0;
    if(dp[curr]!=-1)return dp[curr];
    if(curr>tar){
        return z+recur(curr-1,tar,x,y,z);
    }
    
    int ans=0;
    
    return min({x+recur(2*curr,tar,x,y,z),y+recur(curr+1,tar,x,y,z)});
    
    
    
    
}
    

