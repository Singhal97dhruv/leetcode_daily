class Solution {
public:
   
    int countPrimes(int n) {
      
        int cnt=0;
        bool sieve[5000001]={[0 ... 5000000]=true};
        for(int i=2;i<n;i++){
            if(sieve[i]==true){
                cnt++;
                for(long j=(long)i*i;j<=n;j=j+i){
                    sieve[j]=false;
                }
            }
        }
        return cnt;
        
        
    }
};