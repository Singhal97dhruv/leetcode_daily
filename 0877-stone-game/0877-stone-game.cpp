class Solution {
public:
    int dp[501][501][2];
    int recur(vector<int>&piles,int i,int j,bool Alice){
        if(i>j)return 0;
        if(dp[i][j][Alice]!=-1)return dp[i][j][Alice];
        if(Alice)
            return dp[i][j][Alice]= max(piles[i]+recur(piles,i+1,j,!Alice),piles[j]+recur(piles,i,j-1,!Alice));
            else{
                return dp[i][j][Alice]= min(-piles[i]+recur(piles,i+1,j,!Alice),-piles[j]+recur(piles,i,j-1,!Alice));
            }
        
    }
    
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        return recur(piles,0,piles.size()-1,true)>0?true:false;
    }
};