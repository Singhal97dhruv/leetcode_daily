class Solution {
public:
    
//     vector<vector<int>>offset={{2,-1},{2,1},{1,2},{1,-2},{-1,2},{-1,-2},{-2,1},{-2,-1}};
    vector<vector<vector<long>>>dp;
    long MOD=1000000007;
//     int recur(int r,int c,int n){
        
//         if(r<0 || c<0 ||r>=4 || c>=3||(r==3 && c==0)||(r==3 && c==2))return 0;
//         if(dp[n][r][c]!=0)return dp[n][r][c];
//         if(n==1)return 1;
//         int res=0;
//         for(int i=0;i<8;i++){
//             res=(res+recur(r+offset[i][0],c+offset[i][1],n-1))%MOD;
//         }
//         return dp[n][r][c]= res;
//     }
    
    vector<vector<int>>offset={{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-1,2},{-2,-1},{-2,1}};
    
    int dfs(int i,int j,int n){
        
        if(i<0 || j<0 || i>=4 || j>=3||(i==3 &&(j==0 || j==2)))return 0;
        if(dp[n][i][j]!=0)return dp[n][i][j];
        if(n==1)return 1;
        
        int ans=0;
        
        for(int k=0;k<8;k++){
            ans=(ans + (dfs(i+offset[k][0],j+offset[k][1],n-1))%MOD)%MOD;
        }
        return dp[n][i][j]= ans;
    }
    
    
    
    int knightDialer(int n) {
        int ans=0,m=4,p=3;
        
        dp.resize(n+1,vector<vector<long>>(m,vector<long>(p)));
        
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                ans=(ans+dfs(i,j,n))%MOD;
            }
        }
        return ans;
        
        
    }
};