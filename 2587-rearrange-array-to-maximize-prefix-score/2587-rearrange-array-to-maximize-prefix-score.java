class Solution {
    public int maxScore(int[] nums) {
        Arrays.sort(nums);
        long sum=0;
        int res=0,i=nums.length-1;
        while(i>=0){
            sum+=nums[i];
            if(sum>0)res++;
            else break;
            i--;
        }
        return res;
    }
}