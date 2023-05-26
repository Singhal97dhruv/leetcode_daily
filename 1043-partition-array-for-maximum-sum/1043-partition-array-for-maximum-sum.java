class Solution {
    
    int []dp;
    
    public int memo(int []arr,int idx,int k){
        if(idx>=arr.length)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int ans=0,mx=Integer.MIN_VALUE;
        for(int i=0;i<k;i++){
            if (idx+i>=arr.length)break;
            mx=Math.max(mx,arr[idx+i]);
            
            int leftSub= (i+1)*mx;
            int rightSub= memo(arr,idx+i+1,k);
            ans=Math.max(ans,leftSub+rightSub);
        }
        return dp[idx]= ans;
        
    }
    
    public int maxSumAfterPartitioning(int[] arr, int k) {
        int n=arr.length;
        dp=new int[n+1];
        Arrays.fill(dp,-1);
        return memo(arr,0,k);
    }
}