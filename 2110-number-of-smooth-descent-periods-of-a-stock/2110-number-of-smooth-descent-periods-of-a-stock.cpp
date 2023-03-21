class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long res=1;
        int i=0;
        for(int j=1;j<prices.size();j++){
            if(prices[j]+1==prices[j-1]){
                res+=j-i+1;
            }
            else{
                i=j;
                res++;
            }
        }
        return res;
    }
};