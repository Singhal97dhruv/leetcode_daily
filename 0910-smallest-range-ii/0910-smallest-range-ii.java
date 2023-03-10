class Solution {
    public int smallestRangeII(int[] nums, int k) {
        int n=nums.length;
        Arrays.sort(nums);
        int res=nums[n-1]-nums[0];
        for(int i=0;i<n-1;i++){
            int high=Math.max(nums[n-1]-k,nums[i]+k);
            int low=Math.min(nums[0]+k,nums[i+1]-k);
            res=Math.min(res,high-low);
        }
        return res;
    }
}