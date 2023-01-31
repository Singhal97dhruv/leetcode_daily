class Solution {
    public int bestTeamScore(int[] scores, int[] ages) {
        int n=scores.length,ans=Integer.MIN_VALUE;
        int [][]arr=new int[n][2];
        for(int i=0;i<n;i++){
            arr[i][0]=ages[i];
            arr[i][1]=scores[i];
        }
        Arrays.sort(arr,(a,b)->a[0]!=b[0]?a[0]-b[0]:a[1]-b[1]);
        
        int []dp=new int[n];
        for(int i=0;i<n;i++){
            dp[i]=arr[i][1];
            int temp=dp[i];
            for(int j=0;j<i;j++){
                if(arr[i][1]>=arr[j][1]){
                    dp[i]=Math.max(dp[i],dp[j]+temp);
                }
            }
            ans=Math.max(ans,dp[i]);
        }
        return ans;
    }
}