class Solution {
public:
    
    int kadane(vector<int>&nums){
        int mx=nums[0],currSum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(currSum<0)currSum=0;
            currSum+=nums[i];
            mx=max(mx,currSum);
        }
        return mx;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int nonCircular=kadane(nums);
        int total=0;
        for(int &i:nums){
            total+=i;
            i=-i;
        }
        int circular=total+kadane(nums);
        if(circular==0)return nonCircular;
        return max(nonCircular,circular);
        
    }
    
    // int kadane(vector<int>v){
    //     int mx=v[0],curr_sum=v[0];
    //     for(int i=1;i<v.size();i++){
    //         if(curr_sum<0)
    //             curr_sum=0;
    //         curr_sum+=v[i];
    //         mx=max(mx,curr_sum);
    //     }
    //     return mx;
    // }
    
};