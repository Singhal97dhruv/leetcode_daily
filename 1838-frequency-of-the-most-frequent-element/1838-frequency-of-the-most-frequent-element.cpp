class Solution {
public:
    int maxFrequency(vector<int>& nums, long k) {
       int idx=0,i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            
            k+=nums[i];
            
            if(k<(long)(i-idx+1)*nums[i]){
                k-=nums[idx++];
            }
            
        }
        return i-idx;
        
    }
};