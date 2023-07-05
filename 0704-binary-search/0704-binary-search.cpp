class Solution {
public:
//     int binary_search(vector<int>vect,int left,int rear,int tar){
//         if(rear<left)return -1;
//         int mid=(left+rear)/2;
//         if(vect[mid]==tar)return mid;
//         if(tar>vect[mid])return binary_search(vect,mid+1,rear,tar);
//         else return binary_search(vect,left,mid-1,tar);
        
//     }
    int search(vector<int>& nums, int target) {
       //  int left=0;
       //  int right=nums.size()-1;
       // // return binary_search(nums,left,rear,target);
       //  while(left<right){
       //      int mid=left+(right-left)/2;
       //      if(nums[mid]>=target)right=mid;
       //      else left=mid+1;
       //  }
       //  return nums[left]==target?left:-1;
        
        int left=0,right=nums.size();
        
        while(left<right){
            int mid=left+(right-left)/2;
            
            if(nums[mid]==target)return mid;
            
            if(nums[mid]<target)left=mid+1;
            
            else right=mid;
            
        }
        
        return -1;
        
    }
};