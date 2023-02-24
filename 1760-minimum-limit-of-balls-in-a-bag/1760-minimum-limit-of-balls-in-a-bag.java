class Solution {
    public int minimumSize(int[] nums, int maxOperations) {
        int left=1,right=0;
        for(int i:nums)right=Math.max(right,i);
        while(left<right){
            int mid=left+(right-left)/2;
            int cnt=0;
            for(int i:nums)cnt+=(i-1)/mid;
            if(cnt>maxOperations)left=mid+1;
            else right=mid;
        }
        return left;
    }
}