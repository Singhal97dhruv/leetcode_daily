class Solution {
    public int minDeletion(int[] nums) {
     
        int ptr=0;
        for(int i=0;i<nums.length-1;i++){
            if((i-ptr)%2==0 && nums[i]==nums[i+1])ptr++;
        }
        return ptr+ ((nums.length-ptr)%2==0?0:1);
    }
}