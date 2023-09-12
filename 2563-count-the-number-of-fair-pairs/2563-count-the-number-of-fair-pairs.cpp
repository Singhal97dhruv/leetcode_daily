class Solution {
public:
    
    long long countPairs(vector<int>&nums,int upper){
        long long res=0;
        for(int i=0,j=nums.size()-1;i<j;i++){
            
            while(i<j && nums[i]+nums[j]>upper)j--;
            res+=(long long)j-i;
            
        }
        return res;
    }
    
    
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        
        sort(nums.begin(),nums.end());

        return countPairs(nums,upper)-countPairs(nums,lower-1);
        
        
    }
};