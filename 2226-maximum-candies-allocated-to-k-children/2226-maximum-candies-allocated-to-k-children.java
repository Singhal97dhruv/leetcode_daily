class Solution {
    public int maximumCandies(int[] candies, long k) {
        int left=0,right=10000000;
        while(left<right){
            int mid=(left+right+1)/2;
            long cnt=0;
            for(long i:candies)cnt+=i/mid;
            if(cnt>=k)left=mid;
            else right=mid-1;
        }
        return left;
    }
}