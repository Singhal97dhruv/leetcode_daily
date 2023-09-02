class Solution {
public:
//     int recur(int idx,vector<vector<int>>&rides,int prev){
//         if(idx>=rides.size())return 0;
//         int ans=0;
//         if(rides[idx][0]>=prev){
//             ans=(rides[idx][1]-rides[idx][0]+rides[idx][2])+recur(idx+1,rides,rides[idx][1]);
//         }
        
//         ans=max(ans,recur(idx+1,rides,prev));
//         return ans;
//     }
    
    long long dp[(int)1e5];
    
    int binary(int idx,vector<vector<int>>&rides,int tar){
    
        int ans=-1;
        int left=idx,right=rides.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(rides[mid][0]<tar)left=mid+1;
            else{
              
                ans=mid;
                right=mid-1;
            } 
        }
        
        return ans;
        
        
    }
    
    
    long long memo(int idx,vector<vector<int>>&rides){
        if(idx>=rides.size() || idx<0)return 0;
        if(dp[idx]!=-1)return dp[idx];
        long long ans=0;
        int i;
        
        // for(i=idx+1;i<rides.size();i++){
        //     if(rides[i][0]>=rides[idx][1])break;
        // }
        i=binary(idx+1,rides,rides[idx][1]);
        
        ans= (rides[idx][1]-rides[idx][0]+rides[idx][2])+memo(i,rides);
        ans=max(ans,memo(idx+1,rides));
        
        return dp[idx]=ans;
    }
    
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        
        sort(rides.begin(),rides.end());
        memset(dp,-1,sizeof(dp));
        return memo(0,rides);
        
        
    }
};