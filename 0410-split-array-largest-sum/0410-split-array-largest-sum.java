class Solution {
    public  boolean feasible(int cap,int[] nums,int k){
        int tmp_cap=0,cnt=1;
        for(int i:nums){
            tmp_cap+=i;
            if(tmp_cap>cap){
                tmp_cap=i;
                cnt++;
            }
        }
        if(cnt>k)return false;
        return true;
    }
    public int splitArray(int[] nums, int k) {
        int left=nums[0],right=0;
        for(int i:nums){right+=i;
                        left=Math.max(left,i);}
        while(left<right){
            int mid=left+(right-left)/2;
            if(feasible(mid,nums,k)==false)left=mid+1;
            else right=mid;
        }
        return left;
    }
}