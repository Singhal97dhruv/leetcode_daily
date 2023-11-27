class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int mx=0,mn=0,sum=0;
        for(int i:nums){
            
            sum+=i;
            
            mx=max(sum,mx);
            mn=min(sum,mn);
        }
        
        return mx-mn;
    }
};