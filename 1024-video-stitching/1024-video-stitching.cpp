class Solution {
public:
    int dp[101][101];
    int recur(int i,vector<vector<int>>&clips,int time){
        
      
        if(time==0)return 0;
        if(i<0)return -1;
        if(dp[i][time]!=-1)return dp[i][time];
        
        int skip=recur(i-1,clips,time);
        int take=-1,res=-1; 
        if(clips[i][0]<time && clips[i][1]>=time)
        {
            take=recur(i-1,clips,clips[i][0]);
        }
        if(skip!=-1 && take!=-1){
            res= min(take+1,skip);
        }
        if(skip!=-1 && take==-1){
            res= skip;
        }
        if(skip==-1 && take!=-1)res= take+1;
        return dp[i][time]=res;
        
    }
    
    int videoStitching(vector<vector<int>>& clips, int time) {
        memset(dp,-1,sizeof(dp));
        sort(clips.begin(),clips.end());
        return recur(clips.size()-1,clips,time);
        
        
    }
};