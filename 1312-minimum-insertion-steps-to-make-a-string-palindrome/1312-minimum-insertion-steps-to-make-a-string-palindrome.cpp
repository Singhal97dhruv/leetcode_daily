class Solution {
public:
    // vector<vector<int>>dp;
    // int recur(string s,int i,int j){
    //     if(i>=j)return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     return dp[i][j]=s[i]==s[j]?recur(s,i+1,j-1):1+min(recur(s,i+1,j),recur(s,i,j-1));
    // }
    
    int minInsertions(string s) {
        vector<int> memo(s.length(),0);
        int prev,temp;
        for(int i=s.length()-2;i>=0;i--)
        {
            prev=0;                                       
            for(int j=i;j<s.length();j++)
            {
                temp=memo[j];                             
                memo[j]=s[i]==s[j]?prev:1+min(memo[j],memo[j-1]);
                prev=temp;                        
            }
        }
        return memo[s.length()-1];
    }
};