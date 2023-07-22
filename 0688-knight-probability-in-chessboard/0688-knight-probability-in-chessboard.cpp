class Solution {
public:
    
//     vector<vector<int>>offset={{2,-1},{2,1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
    vector<vector<vector<double>>>dp;
//     double recur(int n,int k,int row,int col){
        
//         if(row<0||col<0||row>=n||col>=n)return 0;
//         if(k==0)return 1;
//         if(dp[row][col][k]!=0)return dp[row][col][k];
//         double temp=0;
//         for(int i=0;i<8;i++){
//             temp+=0.125*recur(n,k-1,row+offset[i][0],col+offset[i][1]);
//         }
//         return dp[row][col][k]=temp;
//     }
    
    vector<vector<int>>offset={{2,1},{2,-1},{-2,-1},{-2,1},{1,2},{1,-2},{-1,2},{-1,-2}};
    
    double memo(int n,int k,int row,int col){
        if(row<0 || col<0 || row>=n|| col>=n)return 0;
        if(k==0)return 1;
        if(dp[row][col][k]!=0)return dp[row][col][k];
        
        double temp=0;
        for(int i=0;i<8;i++){
            temp+=0.125*memo(n,k-1,row+offset[i][0],col+offset[i][1]);
        }
        return dp[row][col][k]= temp;
        
    }
    
    
    double knightProbability(int n, int k, int row, int column) {
        dp.resize(n,vector<vector<double>>(n,vector<double>(k+1)));
        
        // return recur(n,k,row,column);
        return memo(n,k,row,column);
        
    }
};