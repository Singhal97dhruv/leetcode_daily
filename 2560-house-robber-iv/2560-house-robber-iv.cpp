class Solution {
public:
    int calc(vector<int>nums,int k,int mid){
        int i=0,n=nums.size();
        while(i<n){
            if(nums[i]<=mid){
                k--;i+=2;
            }
            else i++;
            if(k==0)return true;
        }
        return k==0;
    }
    int minCapability(vector<int>& nums, int k) {
        
        int low=0,high=1e9+1;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(calc(nums,k,mid))high=mid;
            else low=mid+1;
        }
        return high;
    }
};