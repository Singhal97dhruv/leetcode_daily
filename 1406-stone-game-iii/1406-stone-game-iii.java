class Solution {
    int []dp;
    public int AliceScore(int []s,int idx){
        if(idx>=s.length)return 0;
        if(dp[idx]!=Integer.MIN_VALUE)return dp[idx];
        int total=Integer.MIN_VALUE,sum=0;
        for(int i=0;i<3 && idx+i<s.length;i++){
            sum+=s[idx+i];
            total=Math.max(total,sum-AliceScore(s,idx+i+1));
        }
        return dp[idx]=total;
    }
    public String stoneGameIII(int[] s) {
        int n=s.length;
        dp=new int[n+1];
        Arrays.fill(dp,Integer.MIN_VALUE);
        int ans=AliceScore(s,0);
        
        if(ans>0)return "Alice";
        else if(ans==0)return "Tie";
        return "Bob";
        
    }
}