class Solution {
public:
    int mod=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        
        int odd=0,even=0,res=0;
        for(int i:arr){
            even+=1;
            if(i%2){
                swap(odd,even);
            }
            res=(res+odd)%mod;
        }
        return res;
        
    }
};