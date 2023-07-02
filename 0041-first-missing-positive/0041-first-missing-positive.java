class Solution {
    public int firstMissingPositive(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]<0)nums[i]=0;
        }
        
        for(int i=0;i<n;i++){
            int idx=Math.abs(nums[i])-1;
            if(idx>=0 && idx<n && nums[idx]>=0){
                if(nums[idx]==0)nums[idx]=-(n+1);
                else nums[idx]*=-1;
            }
            
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>=0)return i+1;
        }
        return n+1;
    }
}