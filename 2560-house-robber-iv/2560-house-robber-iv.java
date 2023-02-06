class Solution {
    public boolean calc(int[] nums,int k,int mid){
        int i=0,n=nums.length;
        while(i<n){
            if(nums[i]<=mid){
                k--;i+=2;
            }
            else i++;
            if(k==0)return true;
        }
        return k==0;
    }
    public int minCapability(int[] nums, int k) {
        int low=0,high=1000000001;
        while(low<high){
            int mid=(low+high)/2;
            if(calc(nums,k,mid))high=mid;
            else low=mid+1;
        }
        return high;
    }
}