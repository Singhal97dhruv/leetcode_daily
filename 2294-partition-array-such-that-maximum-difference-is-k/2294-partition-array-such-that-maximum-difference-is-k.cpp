class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int res=0;
        int mn=nums[0],mx=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-mn>k){
                res++;
                mn=nums[i];
            }
            mx=nums[i];
        }
        return res+1;
        
        
    }
};