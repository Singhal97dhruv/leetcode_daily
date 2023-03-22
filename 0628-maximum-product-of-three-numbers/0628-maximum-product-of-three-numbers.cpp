class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0,temp=0,n=nums.size();
        if(nums[0]<0 && nums[1]<0)temp=nums[0]*nums[1];
        
        res=nums[n-1]*nums[n-2]*nums[n-3];
        if(temp>0 && temp*nums[n-1]>res)return temp*nums[n-1];
        return res;
        
    }
};