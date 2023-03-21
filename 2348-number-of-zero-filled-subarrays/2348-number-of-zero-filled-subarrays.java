class Solution {
    public long zeroFilledSubarray(int[] nums) {
        int i=0;
        long res=0;
        for(int j=0;j<nums.length;j++){
            if(nums[j]!=0)i=j+1;
            res+=j-i+1;
        }
        return res;
    }
}