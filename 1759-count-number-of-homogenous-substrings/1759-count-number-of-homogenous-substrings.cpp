class Solution {
public:
    int MOD=1e9+7;
    int countHomogenous(string s) {
    
        int ans=0,curr=0,cnt=0;
        for(int i:s){
            cnt=i==curr?cnt+1:1;
            
            curr=i;
            
            ans=(ans+cnt)%MOD;
            
        }
        return ans;
    }
};