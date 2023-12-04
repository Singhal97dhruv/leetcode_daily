class Solution {
    public int maxWidthRamp(int[] nums) {
     
        int n=nums.length;
        int[] mxRecord=new int[n];
        mxRecord[n-1]=nums[nums.length-1];
        for(int i=n-2;i>=0;i--){
            mxRecord[i]=Math.max(nums[i],mxRecord[i+1]);
        }
        
        int left=0,right=0;
        int res=0;
        while(right<n){
            while(left<right && nums[left]>mxRecord[right])left++;
            
            res=Math.max(res,right-left);
            
            right++;
        }
        return res;
        
        
    }
}