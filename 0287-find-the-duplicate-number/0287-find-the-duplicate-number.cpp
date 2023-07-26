class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
        for(int i=0;i<nums.size();i++){
            int idx=abs(nums[i])-1;
            if(nums[idx]<0)return abs(nums[i]);
            
            nums[idx]*=-1;
        }
        return -1;
        
    
    }
};