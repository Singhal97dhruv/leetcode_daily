class Solution {
    public int gcd(int p,int q){
        if (q==0)return p;
        return gcd(q,p%q);
    }
    public int findGCD(int[] nums) {
        int min=1001;
        int max=0;
        for(int i=0;i<nums.length;i++){
            min=Math.min(min,nums[i]);
            max=Math.max(max,nums[i]);
        }
        return gcd(min,max);
        
    }
}