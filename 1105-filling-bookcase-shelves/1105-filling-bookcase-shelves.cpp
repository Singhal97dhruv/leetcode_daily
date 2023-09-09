class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        
        int n=books.size();
        
        vector<int>dp(n+1,0);
        
        for(int i=0;i<books.size();i++){
            dp[i+1]=dp[i]+books[i][1];
            
            int sum=0,h=0;
            for(int j=i;j>=0;j--){
                sum+=books[j][0];
                if(sum>shelfWidth)break;
                else{
                    h=max(h,books[j][1]);
                    dp[i+1]=min(dp[j]+h,dp[i+1]);
                }
            }
            
        }
        
        return dp[n];
    }
};