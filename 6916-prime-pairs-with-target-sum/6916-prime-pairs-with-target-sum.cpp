class Solution {
public:
    
    vector<vector<int>> findPrimePairs(int n) {
        
        vector<bool>primes(n+1);
        
        for(int i=2;i*i<=n;i++){
            if(!primes[i]){
                for(int j=i*i;j<=n;j+=i){
                    primes[j]=true;
                }
            }
        }
        
        vector<vector<int>>res;
        
        for(int i=2;i<=n/2;i++){
            
            if(!primes[i] && !primes[n-i]){
                res.push_back({i,n-i});
            }
        }
        
        return res;
        
    }
};