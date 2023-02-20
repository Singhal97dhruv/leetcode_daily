class Solution {
    public int[] getMaximumXor(int[] nums, int maximumBit) {
        int[] res=new int[nums.length];
        int Xor=0,n=nums.length;
        for(int i:nums)Xor^=i;
        res[0]=Xor^=(1<<maximumBit)-1;
        for(int i=1;i<n;i++){
            res[i]=Xor^=nums[n-i];
        }
        return res;
    }
}