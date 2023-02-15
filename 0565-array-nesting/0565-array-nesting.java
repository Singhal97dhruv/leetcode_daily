class Solution {
public:
    int arrayNesting(vector<int>& nums) {
     
        int ans=0;
        vector<bool>vis(nums.size(),false);
        for(int i:nums){
            int cnt=0;
            while(!vis[i]){
                cnt++;
                    vis[i]=1;
                i=nums[i];
            }
            ans=max(ans,cnt);
        }
        return ans;
        
    }
};