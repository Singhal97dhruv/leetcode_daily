class Solution {
    
    
    int [][]dp;
    int [][]freq;
    int mod=1_000_000_007;
    public int recur(String[]words,String target,int k,int idx)
    {
        if(idx==target.length())return 1;
        if(k==words[0].length() || words[0].length()-k<target.length()-idx)return 0;
        if(dp[k][idx]!=-1)return dp[k][idx];
        
        int currPos=target.charAt(idx)-'a';
        
        
        long cnt=recur(words,target,k+1,idx);
        if(freq[k][currPos]>0){
            // cnt=(cnt+((recur(words,target,k+1,idx+1))%mod*freq[k][currPos])%mod)%mod;
            cnt+=(long)recur(words,target,k+1,idx+1)*freq[k][currPos];
            cnt%=mod;
        }
        // cnt=(cnt+(freq[k][currPos]*(recur(words,target,k+1,idx+1)%mod)%mod)%mod);
        
        return dp[k][idx]=(int)cnt;
      
    }
    
    public int numWays(String[] words, String target) {
        dp=new int[words[0].length()][target.length()];
        
        for(int[] i:dp){
            Arrays.fill(i,-1);
        }
        freq=new int[words[0].length()][128];
        for(int i=0;i<words.length;i++){
            for(int j=0;j<words[0].length();j++){
                freq[j][words[i].charAt(j)-'a']++;
            }
        }
       
        return recur(words,target,0,0);
        
    }
}