class Solution {
public:
    
   
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
       int l=0,r=nums.size()-1,idx=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                idx=mid;break;
            }
            if(target<nums[mid])r=mid-1;
            else l=mid+1;
        }
        if(idx==-1)return {-1,-1};
        vector<int>ans;
        int left=idx,right=idx;
        while(left>=0 && nums[left]==target)left--;
        ans.push_back(left+1);
        while(right<nums.size() && nums[right]==target)right++;
        ans.push_back(right-1);
        return ans;
        
    }
};