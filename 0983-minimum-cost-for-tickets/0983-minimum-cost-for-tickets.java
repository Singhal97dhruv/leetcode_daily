class Solution {
    public int mincostTickets(int[] days, int[] costs) {
        int n=days.length;
        int last=days[n-1];
        boolean []isTravelDay=new boolean[last+1];
        int []dp=new int[last+1];
        Arrays.fill(dp,Integer.MAX_VALUE);
        for(int i:days)isTravelDay[i]=true;
        dp[0]=0;
        for(int i=1;i<=last;i++){
            if(!isTravelDay[i]){
                dp[i]=dp[i-1];
                continue;
            }
            dp[i]=Math.min(dp[i-1]+costs[0],Math.min(dp[Math.max(0,i-7)]+costs[1],dp[Math.max(0,i-30)]+costs[2]));
        }
        return dp[last];
        
    }
}