class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        
        int bit=INT_MAX;
        for(int i:nums)bit&=i;
        if(bit!=0)return 1;
        bit=INT_MAX;
        int cnt=0;
        for(int i:nums){
            bit&=i;
            if(bit==0){
                cnt++;
                bit=INT_MAX;
            }
        }
        return cnt;
        
    }
};