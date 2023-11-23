class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        // long long res=1;
        // int i=0;
        // for(int j=1;j<prices.size();j++){
        //     if(prices[j]+1==prices[j-1]){
        //         res+=j-i+1;
        //     }
        //     else{
        //         i=j;
        //         res++;
        //     }
        // }
        // return res;
        
        long long ans=1;
        for(int i=1,j=0;i<prices.size();i++){
            if(prices[i]==prices[i-1]-1)ans+=i-j+1;
            else{ j=i;
            ans++;
                }
        }
        return ans;
    }
};