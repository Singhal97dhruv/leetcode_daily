class Solution {
    public int countPrimes(int n) {
        
        boolean[] sieve= new boolean[n];
        Arrays.fill(sieve,true);
        
        int cnt=0;
        
        for(int i=2;i<n;i++){
            if(sieve[i]==true){
                cnt++;
                for(long j=(long)i*i;j<n;j+=i){
                    sieve[(int)j]=false;
                }
            }
        }
        
        return cnt;
        
        
    }
}