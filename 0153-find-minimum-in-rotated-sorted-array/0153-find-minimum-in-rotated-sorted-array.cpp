class Solution {
public:
    int findMin(vector<int>& nums) {
        
//         int l=0,r=nums.size()-1;
//         while(l<r){
//             if(nums[l]<nums[r])return nums[l];
            
//             int mid=l+(r-l)/2;
//             if(nums[mid]>nums[r]){
//                 l=mid+1;
//             }
//             else{
//                 r=mid;
//             }
//         }
//         return nums[l];
        
        
//         int left=0,right=nums.size()-1;
        
//         while(left<right){
//             if(nums[left]<nums[right])return nums[left];
//             int mid=left+(right-left)/2;
            
//             if(nums[mid]>nums[right])left=mid+1;
//             else right=mid;
            
//         }
//         return nums[left];
        
        
        // int left=0,right=nums.size()-1,mn=INT_MAX;
        // while(left<right){
        //    if(nums[left]<nums[right])return nums[left];
        //     int mid=left+(right-left)/2;
        //     if(nums[mid]>nums[right])left=mid+1;
        //     else right=mid;
        // }
        // return nums[left];
        
        
        int left=0,right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[left]<nums[right])return nums[left];
            if(nums[mid]>nums[right])left=mid+1;
            else right=mid;
        }
        return nums[left];
    }
};