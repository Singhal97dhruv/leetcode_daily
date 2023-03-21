class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res=0;
        long long prod=1;
        for(int i=0,j=0;j<nums.size();j++){
            prod*=nums[j];
            while(i<=j && prod>=k){
                prod/=nums[i++];
                
            }
            res+=j-i+1;
        }
        return res;
    }
};