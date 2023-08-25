class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //  if(nums.size()==1)return 0;
        //  else if(nums.size()==2)return nums[0]>nums[1]?0:1;
        // int n=nums.size();
        // int i;
        // for(i=1;i<=nums.size()/2;i++){
        //     if(nums[i-1]<nums[i] && nums[i]>nums[i+1])return i;
        //     else if(nums[n-i]<nums[n-i-1] && nums[n-i-1]>nums[n-i-2])return n-i-1;
        // }
        // return nums[i-1]<nums[i]?n-1:0;
        
        
        if(nums.size()==1)return 0;
        else if(nums.size()==2)return nums[0]>nums[1]?0:1;
        
        int n=nums.size();
        int i;
        for(i=1;i<=n/2;i++){
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1])return i;
            if(nums[n-i-1]>nums[n-i] && nums[n-i-1]>nums[n-i-2])return n-i-1;
        }
        
        return nums[i]>nums[i-1]?n-1:0;
        
        
    }
};