class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long res=0,j=-1,jmx=-1,jmn=-1,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK)j=i;
            if(nums[i]==maxK)jmx=i;
            if(nums[i]==minK)jmn=i;
            res+=max(0L,min(jmx,jmn)-j);
        }
        return res;
    }
};