class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int i=-1;
        // for(int j=i+1;j<nums.size();j++){
        //     if(nums[j]==0){
        //         i++;
        //         swap(nums[i],nums[j]);
        //     }
        // }
        // for(int j=i+1;j<nums.size();j++){
        //     if(nums[j]==1){
        //         i++;
        //         swap(nums[j],nums[i]);
        //     }
        // }
//         int i=0,r=nums.size()-1,mid=0;
//         while(mid<=r){
//             if(nums[mid]==0){
//                 swap(nums[mid],nums[i]);
//                 i++,mid++;
//             }
//             else if(nums[mid]==2){
//                 swap(nums[mid],nums[r]);
//                 r--;
//             }
//             else mid++;
//         }
 
        int left=0,mid=0,right=nums.size()-1;
        while(mid<=right){
            if(nums[mid]==0){
                swap(nums[left],nums[mid]);
                left++;mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[right]);
                right--;
            }
            else
                mid++;
        }
        
    }
};