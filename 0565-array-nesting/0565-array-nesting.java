class Solution {
    public int arrayNesting(int[] nums) {
        int ans=0;
        boolean vis[]=new boolean[nums.length];
        for(int i:nums){
            int cnt=0;
            while(!vis[i]){
                cnt++;
                vis[i]=true;
                i=nums[i];
            }
            ans=Math.max(ans,cnt);
        }
        return ans;
    }
}