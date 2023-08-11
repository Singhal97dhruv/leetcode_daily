class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>>res;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             int target=-nums[i];
//             int front=i+1;
//             int r=nums.size()-1;
//             while(front<r){
//                 int sum=nums[front]+nums[r];
//                 if(sum>target)r--;
//                 else if(sum<target) front++;
//                 else{
//                     res.push_back({nums[i],nums[front],nums[r]});
//                     int x=nums[front],y=nums[r];
//                     while(front<r && nums[front]==x){
//                         front++;
//                     }
//                     while(front<r && nums[r]==y)r--;
//                 }
//             }
//             while(i+1<r && nums[i]==nums[i+1])i++;
//         }
        
//         return res;
//         int n=nums.size();
//      sort(nums.begin(),nums.end());
//         vector<vector<int>>res;
//         for(int i=0;i<n-2;i++){
//             int target=-nums[i];
//             int left=i+1,right=n-1;
//             while(left<right){
//                 int sum=nums[left]+nums[right];
//                 if(sum==target){
//                     res.push_back({nums[i],nums[left],nums[right]});
                    
//                     while(left<right && nums[left]==nums[left+1])left++;
//                     while(left<right && nums[right]==nums[right-1])right--;
//                     left++,right--;
                    
//                 }
//                 else if(target<sum){
//                     right--;
//                 }
//                 else left++;
//             }
//             while(i<n-2 && nums[i]==nums[i+1])i++;
//         }
//         return res;
        
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int target=-nums[i];
            int left=i+1,right=n-1;
            while(left<right){
                if(nums[left]+nums[right]==target){
                    res.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left]==nums[left+1])left++;
                    while(left<right && nums[right]==nums[right-1])right--;
                    left++,right--;

                }
                else if(nums[left]+nums[right]<target)left++;
                else right--;
            }
        
            while(i<n-2 && nums[i]==nums[i+1])i++;
            
        }
        return res;
    }
};