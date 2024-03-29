class Solution {
public:
    int mod=1e9+7;
//     long long dp[100001]={[0 ... 100000]=-1};
//     long long recur(int lo,int hi,int zero,int ones,long long arr){
//         if(arr>hi)return 0;
//         if(dp[arr]!=-1)return dp[arr];
//         int cnt=0;
//         if(arr>=lo && arr<=hi)cnt=1;
//         cnt=(cnt+recur(lo,hi,zero,ones,arr+zero)%mod+recur(lo,hi,zero,ones,arr+ones)%mod)%mod;
//         return dp[arr]= cnt;
        
//     }
    
    int countGoodStrings(int low, int high, int zero, int one) {
        // return recur(low,high,zero,one,0);0
        
        long long dp[100001]={0};
        dp[0]=1;
        for(int i=min(zero,one);i<=high;i++){
            if(i>=zero)
            dp[i]=(dp[i]+dp[i-zero])%mod;
            if(i>=one)
                dp[i]=(dp[i]+dp[i-one])%mod;
        }
        int sum=0;
        for(int i=low ;i<=high;i++){
            sum=(sum+dp[i])%mod;
        }
        return sum;
        
        
        
    }
};