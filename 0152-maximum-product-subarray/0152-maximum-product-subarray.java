class Solution {
    public int maxProduct(int[] nums) {
        int res=nums[0],mn=res,mx=res;
        for(int i=1;i<nums.length;i++){
            if(nums[i]<0){
                int temp=mn;
                mn=mx;
                mx=temp;
            }
            mn=Math.min(nums[i],nums[i]*mn);
            mx=Math.max(nums[i],nums[i]*mx);
            res=Math.max(res,mx);
        }
        return res;
    }
}