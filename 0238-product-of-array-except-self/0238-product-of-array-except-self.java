class Solution {
    public int[] productExceptSelf(int[] nums) {
        int curr=1;
        int []res=new int[nums.length];
        Arrays.fill(res,1);
        for(int i=0;i<nums.length;i++){
            res[i]*=curr;
            curr*=nums[i];
        }
        curr=1;
        for(int i=nums.length-1;i>=0;i--){
            res[i]*=curr;
            curr*=nums[i];
        }
        return res;
    }
}