class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int res=0,i=0,n=nums.size();
        long sum=0;
        while(i<n){
            sum+=nums[i];
            if(sum>0)res++;
            else break;
            i++;
        }
        return res;
    }
};