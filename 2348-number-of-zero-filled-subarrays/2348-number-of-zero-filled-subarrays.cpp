class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int i=0;
           long res=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0)
                i=j+1;
            res+=j-i+1;
        }
        return res;
        
    }
};