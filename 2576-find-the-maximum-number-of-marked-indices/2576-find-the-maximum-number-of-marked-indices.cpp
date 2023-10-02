class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        
        int n=nums.size(),ans=0;
        sort(nums.begin(),nums.end());
        int i=nums.size()/2-1, j=nums.size()-1;
        while(i>=0 && j>=0){
            
            if(nums[i]*2<=nums[j]){
                j--;
                ans++;
            }
            i--;
        }
        return ans*2;
        
    }
};