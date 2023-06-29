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
        
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int target=-nums[i];
            int l=i+1,r=n-1;
            while(l<r){
                int mid=l+(r-l)/2,sum=nums[l]+nums[r];
                if(sum>target)
                    r--;
                else if(sum<target)
                    l++;
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    int x=nums[l],y=nums[r];
                    while(l<r && nums[l]==x)l++;
                    while(l<r && nums[r]==y)r--;
                }
            }
            while(i+1<r && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};