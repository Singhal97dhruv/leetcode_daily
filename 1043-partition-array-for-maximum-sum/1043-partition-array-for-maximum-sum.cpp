class Solution {
public:
    
    //Bottom up APProach
//     int dp[501]={[0 ... 500]=-1};
//     int recur(vector<int>&arr,int idx,int k){
//         if(idx>=arr.size())return 0;
//         if(dp[idx]!=-1)return dp[idx];
//         int mx=INT_MIN,ans=0;
//         for(int i=0;i<k;i++){
//             if(idx+i==arr.size())break;
//             mx=max(mx,arr[idx+i]);
//             int leftSub= mx*(i+1);
//             int rightSub=recur(arr,idx+i+1,k);
//             ans=max(ans,leftSub+rightSub);
            
//         }
//         return dp[idx]= ans;
//     }
    
    
        int dp[501]={[0 ... 500]=0};

    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        // return recur(arr,0,k);
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            int mx=INT_MIN;
            for(int j=0;j<k;j++){
                if(i+j>=arr.size())break;
                
                mx=max(mx,arr[i+j]);
                
                int leftSub=(j+1)*mx;
                int rightSub=dp[i+j+1];
                dp[i]=max(dp[i],leftSub+rightSub);
            }
        }
        
        return dp[0];
    }
};