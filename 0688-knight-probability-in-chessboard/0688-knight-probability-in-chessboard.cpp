class Solution {
public:
    double dp[26][26][101];
   vector<vector<int>>offset={{2,1},{2,-1},{-2,-1},{-2,1},{1,2},{1,-2},{-1,2},{-1,-2}};
    double recur(int n,int k,int row,int col){
        if(row<0 || col<0 || row>=n || col>=n )return 0;
        if(k==0)return 1;
        if(dp[row][col][k]!=0)return dp[row][col][k];
        
        double ans=0;
        for(int i=0;i<8;i++){
            ans+=0.125*recur(n,k-1,row+offset[i][0],col+offset[i][1]);
        }
        return dp[row][col][k]= ans;
    }
    
    
    double knightProbability(int n, int k, int row, int column) {
     
        memset(dp,0.0,sizeof(dp));
        
        return recur(n,k,row,column);
        
        
    }
};