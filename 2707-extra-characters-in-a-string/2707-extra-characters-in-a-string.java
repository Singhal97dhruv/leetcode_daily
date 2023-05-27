class Solution {
    
    int []dp;
    Set<String>set;  
    public int memo(String s,int idx){
        int n=s.length();
        if(idx>=n)return 0;
        
        if(dp[idx]!=-1)return dp[idx];
    
        int ans=memo(s,idx+1);
        
        for(int i=1;i+idx<=n;i++)
        {
            if(set.contains(s.substring(idx,idx+i))){
                ans=Math.max(ans,i+memo(s,idx+i));
            }
        }
        return dp[idx]=ans;
        
    }
    
    public int minExtraChar(String s, String[] dictionary) {
        
        int n=s.length();
        dp=new int[n+1];
        Arrays.fill(dp,-1);
        set=new HashSet<>();
        for(String st:dictionary){
            set.add(st);
        }
        
        return n-memo(s,0);
        
    }
}