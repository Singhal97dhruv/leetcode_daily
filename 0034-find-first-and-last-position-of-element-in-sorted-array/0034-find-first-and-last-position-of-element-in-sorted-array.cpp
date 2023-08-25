class Solution {
public:
    
    int BinarySearch(vector<int>&nums,int target){
        if(!nums.size())return -1;
        int left=0,right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target)return mid;
            if(target<nums[mid])right=mid;
            else left=mid+1;
        }
        return nums[left]==target?left:-1;
        
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int idx=BinarySearch(nums,target);
        if(idx==-1)return {-1,-1};
        
        int left=idx-1,right=idx+1;
        while(left>=0 && nums[left]==nums[left+1])left--;

        while(right<nums.size() && nums[right]==nums[right-1])right++;
        
        return {left+1,right-1};
        
        
    }
};