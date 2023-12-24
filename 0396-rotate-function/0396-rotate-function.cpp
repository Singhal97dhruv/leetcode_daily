class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        
        int sum=0,Fprev=0,ptr=0;
        for(int i:nums){
            sum+=i;
            Fprev+=i*ptr;
            ptr++;
        }
        int mx=Fprev,n=nums.size();
        for(int i=1;i<n;i++){
            int temp= Fprev + sum-n*nums[n-i];
            mx=max(mx,temp);
            Fprev=temp;
        }
        
        return mx;
        
    }
};