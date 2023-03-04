class Solution {
    public long countSubarrays(int[] nums, int minK, int maxK) {
        long n=nums.length,j=-1,jmx=-1,jmn=-1,res=0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxK||nums[i]<minK)j=i;
            if(nums[i]==maxK)jmx=i;
            if(nums[i]==minK)jmn=i;
            res+=Math.max(0L,Math.min(jmn,jmx)-j);
        }
        return res;
    }
}