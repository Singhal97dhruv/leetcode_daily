class Solution {
    
    public int maxSum(int []prefix,int M,int N){
        int ans=0,ml=0;
        for(int i=M+N;i<prefix.length;i++){
            ml=Math.max(ml,prefix[i-M]-prefix[i-M-N]);
            ans=Math.max(ans,ml+prefix[i]-prefix[i-M]);
        }
        return ans;
    }
    
    public int maxSumTwoNoOverlap(int[] nums, int firstLen, int secondLen) {
        int []prefix=new int[nums.length+1];
        for(int i=0;i<nums.length;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        
        return Math.max(maxSum(prefix,firstLen,secondLen),maxSum(prefix,secondLen,firstLen));
        
    }
}