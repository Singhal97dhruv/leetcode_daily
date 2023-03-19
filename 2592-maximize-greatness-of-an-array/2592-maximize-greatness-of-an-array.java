class Solution {
    public int maximizeGreatness(int[] nums) {
        int res=0;
        Arrays.sort(nums);
        for(int i:nums){
            if(i>nums[res])res++;
        }
        return res;
    }
}