class Solution {
    public int gcd(int p,int q){
        if(q==0)return p;
        return gcd(q,p%q);
    }
    public int subarrayGCD(int[] nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.length;i++){
            int currGcd=0;
            for(int j=i;j<nums.length;j++){
                currGcd=gcd(nums[j],currGcd);
                if(currGcd<k || currGcd%k!=0)break;
                if(currGcd==k)
                cnt++;
            }
        }
        return cnt;
    }
}