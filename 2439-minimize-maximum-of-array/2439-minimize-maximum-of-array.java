class Solution {
    public int minimizeArrayValue(int[] nums) {
        long sum=0,mn=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            mn=Math.max(mn,(sum+i)/(i+1));
        }
        return (int)mn;
    }
}