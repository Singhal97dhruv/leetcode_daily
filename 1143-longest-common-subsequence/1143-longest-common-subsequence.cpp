class Solution {
public:
    // int lcs(string X,string Y,int m,int n){
    //     if(m==0 || n==0)return 0;
    //     if(X[m-1]==Y[n-1])return 1+lcs(X,Y,m-1,n-1);
    //     return max(lcs(X,Y,m-1,n),lcs(X,Y,m,n-1));
    // }
    // int mem[1001][1001];
    //  int memo(string X,string Y,int m,int n){
    //     //  memset(mem,-1,sizeof(mem))
    //     if(m==0 || n==0)return 0;
    //     if(mem[m][n]!=-1)return mem[m][n];
    //     if(X[m-1]==Y[n-1])return mem[m][n]= 1+memo(X,Y,m-1,n-1);
    //     return mem[m][n]= max(memo(X,Y,m-1,n),memo(X,Y,m,n-1));
    // }
//     int dp[1001][1001];
//     void dprog(string X,string Y,int m,int n){
//         for(int i=1;i<=m;i++){
//             for(int j=1;j<=n;j++){
//                 if(X[i-1]==Y[j-1])dp[i][j]=1+dp[i-1][j-1];
//                 else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
    
    
    int dp[1001][1001];
    
//     int lcs(string text1,string text2,int M,int N){
//         if(M<0 || N<0)return 0;
//         if(dp[M][N]!=-1)return dp[M][N];
//         if(text1[M]==text2[N])return dp[M][N]= 1+lcs(text1,text2,M-1,N-1);
        
//             return dp[M][N]= max(lcs(text1,text2,M-1,N),lcs(text1,text2,M,N-1));
        
//     }
    
    int tabulation(string text1,string text2){
        int M=text1.size(),N=text2.size();
        for(int i=1;i<=M;i++){
            for(int j=1;j<=N;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[M][N];
    }
    

    int longestCommonSubsequence(string text1, string text2) {
        // memset(mem,-1,sizeof(mem));
        // return memo(text1,text2,text1.size(),text2.size());
//         memset(dp,0,sizeof(dp));

//         dprog(text1,text2,text1.size(),text2.size());
//         return dp[text1.size()][text2.size()];
        
        memset(dp,0,sizeof(dp));
        // return lcs(text1,text2,text1.size()-1,text2.size()-1);
        return tabulation(text1,text2);
        
    }
};