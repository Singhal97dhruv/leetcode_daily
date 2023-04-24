class Solution {
    
    class pair{
        int maxi;
        int sum;
        pair(int maxi,int sum){
            this.maxi=maxi;
            this.sum=sum;
        }
    }
    
    public pair memo(int l,int r,int [] arr,pair dp[][]){
        if(l==r)return new pair(arr[l],0);
        if(dp[l][r]!=null)return dp[l][r];
        pair ans=new pair(0,1000000);
        for(int i=l;i<r;i++){
            pair p_left=memo(l,i,arr,dp);
            pair p_right=memo(i+1,r,arr,dp);
            int total=p_left.sum+p_right.sum+(p_left.maxi*p_right.maxi);
            if(total<ans.sum){
                ans.sum=total;
                ans.maxi=Math.max(p_left.maxi,p_right.maxi);
            }
        }
        return dp[l][r]=new pair(ans.maxi,ans.sum);
        
    }
    
    
    public int mctFromLeafValues(int[] arr) {
        return memo(0,arr.length-1,arr,new pair[arr.length][arr.length]).sum;
    }
}