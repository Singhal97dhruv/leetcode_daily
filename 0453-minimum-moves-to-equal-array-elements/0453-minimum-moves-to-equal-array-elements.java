class Solution {
    public int minMoves(int[] nums) {
        int mn=Integer.MAX_VALUE,sum=0;
        for(int i:nums){
            sum+=i;
            mn=Math.min(mn,i);
        }
        return sum-nums.length*mn;
    }
}