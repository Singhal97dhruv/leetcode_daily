class Solution {
    public long getDescentPeriods(int[] prices) {
        long res=1;
        int i=0;
        for(int j=1;j<prices.length;j++){
            if(prices[j]+1==prices[j-1]){
                res+=j-i+1;
            }
            else{
                res++;
                i=j;
            }
        }
        return res;
    }
}