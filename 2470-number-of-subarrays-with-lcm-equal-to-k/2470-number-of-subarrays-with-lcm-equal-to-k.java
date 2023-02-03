class Solution {

    public int gcd(int p,int q){
        if(q==0)return p;
        return gcd(q,p%q);
    }
    public int lcm(int p,int q){
        return (p*q)/gcd(p,q);
    }
    public int subarrayLCM(int[] nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.length;i++){
            int currLcm=1;
            for(int j=i;j<nums.length;j++){
                currLcm=lcm(currLcm,nums[j]);
                if(currLcm>k)break;
                if(currLcm==k)cnt++;  
            }
        }
        return cnt;
    }
}