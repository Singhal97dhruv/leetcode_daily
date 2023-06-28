class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int low=prices[0],res=0;
        // for(int i=1;i<prices.size();i++){
        //     if(prices[i]<low){
        //         low=prices[i];
        //     }
        //     else res=max(prices[i]-low,res);
        // }
        // return res;
        
        int low=prices[0];
        int diff=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<low)low=prices[i];
            else diff=max(diff,prices[i]-low);
        }
        return diff;
        
    }
};