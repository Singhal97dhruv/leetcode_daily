class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1,right=*max_element(nums.begin(),nums.end());
        while(left<right){
            int mid=left+(right-left)/2;
            int cnt=0;
            for(int i:nums)cnt+=(i+mid-1)/mid;
            if(cnt>threshold)left=mid+1;
            else right=mid;
        }
        return left;
    }
};