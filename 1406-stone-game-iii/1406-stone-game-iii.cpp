class Solution {
public:
    // int dp[50001]={[0 ... 50000]=0};
//     int recur(int idx,vector<int>& stones){
//         if(idx>=stones.size())return 0;
//         if(dp[idx]!=INT_MIN)return dp[idx];
//         int sum=0,total=INT_MIN;
//         for(int i=0;i<3 && idx+i<stones.size();i++){
//             sum+=stones[idx+i];
//             total=max(total,sum-recur(idx+i+1,stones));
//         }
//         return dp[idx]= total;
//     }
    
    string stoneGameIII(vector<int>& s) {
//         int ans=recur(0,stoneValue);
//         if(ans>0)return "Alice";
//         else if(ans==0)return "Tie";
//         return "Bob";
        
        
        int n=s.size();
        int dp[50001]={[0 ... 50000]=0};
        for(int i=n-1;i>=0;i--){
            int total=INT_MIN;

            total=max(total,s[i]-dp[i+1]);
 
            if(i+1<n)total=max(total,s[i]+s[i+1]-dp[i+2]);
            if(i+2<n)total=max(total,s[i]+s[i+1]+s[i+2]-dp[i+3]);
            dp[i]=total;
        }
        int ans=dp[0];
          if(ans>0)return "Alice";
        else if(ans==0)return "Tie";
        return "Bob";
        
    }
};