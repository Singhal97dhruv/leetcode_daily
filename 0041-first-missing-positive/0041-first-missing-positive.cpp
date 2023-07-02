class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)nums[i]=0;
        }
        
        for(int i=0;i<n;i++){
            int idx=abs(nums[i])-1;
                if(idx>=0 && idx<n){
                    if(nums[idx]==0)nums[idx]=-(n+1);
                    else if(nums[idx]>0)
                        nums[idx]*=-1;
                }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>=0)return i+1;
        }
        return n+1;
    }
};