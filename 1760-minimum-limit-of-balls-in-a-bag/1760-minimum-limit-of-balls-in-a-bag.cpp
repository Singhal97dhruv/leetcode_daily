class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int left=1,right=*max_element(nums.begin(),nums.end());
        while(left<right){
            int mid=left+(right-left)/2;
            int cnt=0;
            for(int i:nums)cnt+=(i-1)/mid;
            if(cnt>maxOperations)left=mid+1;
            else right=mid;
        }
        return left;
    }
};