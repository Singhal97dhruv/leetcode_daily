class Solution {
public:
    
    int recur(int pos,int ptr,int n,string &key,vector<int>vect[26],vector<vector<int>>&dp){
        if(ptr==key.size())return 0;
        if(dp[pos][ptr])return dp[pos][ptr];
        int res=INT_MAX;
        
        for(int p:vect[key[ptr]-'a']){
            int dist=abs(pos-p);
            res=min(res,min(dist,n-dist)+recur(p,ptr+1,n,key,vect,dp));
        }
        return dp[pos][ptr]= res+1;
    }
    
    int findRotateSteps(string ring, string key) {
        
        int n=ring.size();
        vector<vector<int>>dp(n,vector<int>(key.size()));
        vector<int>vect[26];
        for(int i=0;i<n;i++){
            vect[ring[i]-'a'].push_back(i);
        }
       return recur(0,0,n,key,vect,dp);
        
        
    }
};