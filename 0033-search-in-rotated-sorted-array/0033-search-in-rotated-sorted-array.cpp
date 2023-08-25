class Solution {
public:
    int search(vector<int>& nums, int target) {
        
//         int l=0,r=nums.size()-1;
        
//         while(l<=r){
            
//             int mid=l+(r-l)/2;
//             if(nums[mid]==target)return mid;
//             if(nums[mid]>nums[r]){
//                 if(target>=nums[l] && target<nums[mid]){
//                     r=mid-1;
//                 }
//                 else l=mid+1;
                
//             }
//             else if(nums[l]>nums[mid]){
//                 if(target<=nums[r] && target>nums[mid])
//                     l=mid+1;
            
//             else r=mid-1;
//             }
//             else{
//                 if(target<nums[mid])r=mid-1;
//                 else l=mid+1;
//             }
            
//         }
//         return -1;
        
        // int l=0,r=nums.size()-1;
        // while(l<r){
        //     int mid=l+(r-l)/2;
        //     if(nums[mid]==target)return mid;
        //     else if(nums[l]>nums[mid]){
        //         if(target>nums[mid] && target<=nums[r])l=mid+1;
        //         else r=mid;
        //     }
        //     else if(nums[mid]>nums[r]){
        //         if(target>=nums[l] && target<nums[mid])r=mid;
        //         else l=mid+1;
        //     }
        //     else {
        //         if(target>=nums[l] && target<=nums[mid])r=mid;
        //         else l=mid+1;
        //     }
        // }
        // return nums[l]==target?l:-1;
        
        
//         int left=0,right=nums.size()-1;
        
//         while(left<right){
            
//             int mid=left+(right-left)/2;
            
//             if(nums[mid]==target)return mid;
            
//             if(nums[left]>nums[mid]){
                
//                 if(target<nums[left] && target>nums[mid])left=mid+1;
//                 else right=mid;
                
//             }

//             else if(nums[right]<nums[mid]){
//                 if(target<nums[mid] && target>=nums[left])right=mid;
//                 else left=mid+1;
//             }
            
//             else {
//                 if(target<nums[mid])right=mid;
//                 else left=mid+1;
//             }
//         }
        
//         return nums[left]==target?left:-1;
        
        
      int left=0,right=nums.size()-1;
        
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target)return mid;
            
            if(nums[left]>nums[mid]){
                if(target>nums[mid] && target<nums[left]){
                    left=mid+1;
                }
                else right=mid;
            }
         
            else if(nums[right]<nums[mid]){
                if(target<nums[mid] && target>nums[right])right=mid;
                else left=mid+1;
            }
            
            else{
                if(target<nums[mid])right=mid;
                else left=mid+1;
            }
            
        }
        return nums[left]==target?left:-1;
        
        
    }
};