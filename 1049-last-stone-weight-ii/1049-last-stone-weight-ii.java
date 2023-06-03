class Solution {
    int [][]dp=new int [31][3001];
    public int memo(int i,int []stones,int sum1,int sum2){
        if(i>=stones.length)return Math.abs(sum1-sum2);
        
        if(dp[i][sum1]!=-1)return dp[i][sum1];
        
        return dp[i][sum1]= Math.min(memo(i+1,stones,sum1+stones[i],sum2),memo(i+1,stones,sum1,sum2+stones[i]));
    }
    
    public int lastStoneWeightII(int[] stones) {
        
        for(int []i:dp)
            Arrays.fill(i,-1);
        
        return memo(0,stones,0,0);
        
    }
}