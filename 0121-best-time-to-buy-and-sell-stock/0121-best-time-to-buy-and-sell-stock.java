class Solution {
    public int maxProfit(int[] prices) {
        int low=Integer.MAX_VALUE,high=0;
        for(int i:prices){
            if(i<low){
                low=i;
            }
            if((i-low)>high)high=i-low;
        }
        return high;
    }
}