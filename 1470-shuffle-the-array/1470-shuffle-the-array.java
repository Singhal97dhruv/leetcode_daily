class Solution {
    public int[] shuffle(int[] nums, int n) {
        
        // for(int i=n;i<nums.length;i++){
        //     nums[i]=nums[i]*1024 + nums[i-n];
        // }
        // int idx=0;
        // for(int i=n;i<nums.length;i++,idx+=2){
        //     nums[idx]=nums[i]%1024;
        //     nums[idx+1]=nums[i]/1024;
        // }
        // return nums;
        for(int i=n;i<nums.length;i++){
            nums[i]=(nums[i]<<10)|nums[i-n];
        }
        int idx=0;
        for(int i=n;i<nums.length;i++,idx+=2){
            nums[idx]=nums[i]&1023;
            nums[idx+1]=nums[i]>>10;
        }
        return nums;
    }
}