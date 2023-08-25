class Solution {
public:
    int dp[101][101];
    // bool recur(string s1,string s2,string s3,int m,int n,int op){
    //     if(m<0 && n<0 && op<0)return true;
    //     if(m>=0 && n>=0 && t[m][n]!=-1)return t[m][n];
    //     if(m>=0 && s1[m]==s3[op] && n>=0 && s2[n]==s3[op]){
    //         return t[m][n]=recur(s1,s2,s3,m-1,n,op-1)|| recur(s1,s2,s3,m,n-1,op-1);
    //     }
    //     else if(m>=0 && s1[m]==s3[op]){
    //         return recur(s1,s2,s3,m-1,n,op-1);
    //     }
    //     else if(n>=0 && s2[n]==s3[op])
    //         return recur(s1,s2,s3,m,n-1,op-1);
    //     return false;
    // }
    
    bool recur(int m,int n,int idx,string s1,string s2,string s3){
        if(m<0 && n<0 && idx<0)return true;
        if(m>=0 && n>=0 && dp[m][n]!=-1)return dp[m][n];
        if(m>=0 && n>=0 && s1[m]==s3[idx] && s2[n]==s3[idx]){
            return dp[m][n]= recur(m-1,n,idx-1,s1,s2,s3)||recur(m,n-1,idx-1,s1,s2,s3);
        }
        
        if(m>=0 && s1[m]==s3[idx]){
            return recur(m-1,n,idx-1,s1,s2,s3);
        }
        if(n>=0 && s2[n]==s3[idx]){
            return recur(m,n-1,idx-1,s1,s2,s3);
        }
        return false;
    }
    
    
    bool isInterleave(string s1, string s2, string s3) {
       //  if(s1.size()+s2.size()!=s3.size())return false;
       //  memset(t,-1,sizeof(t));
       // return  recur(s1,s2,s3,s1.size()-1,s2.size()-1,s3.size()-1);
        
        if(s1.size()+s2.size()!=s3.size())return false;
        memset(dp,-1,sizeof(dp));
        return recur(s1.size()-1,s2.size()-1,s3.size()-1,s1,s2,s3);
        
    }
};