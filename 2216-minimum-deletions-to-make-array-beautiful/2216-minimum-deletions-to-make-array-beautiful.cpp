class Solution {
public:
    int minDeletion(vector<int>& nums) {
        
        int ptr=0;
        
        for(int i=0;i<nums.size()-1;i++){
            if((i-ptr)%2==0 && nums[i]==nums[i+1])ptr++;
        }
        return ptr+((nums.size()-ptr)%2==0?0:1);
    }
};