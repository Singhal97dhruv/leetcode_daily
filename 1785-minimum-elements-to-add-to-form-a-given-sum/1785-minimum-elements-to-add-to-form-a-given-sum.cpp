class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long tar=abs(goal-sum);
        int res=0;
        res+=tar/limit;
        res+=tar%limit==0?0:1;
        
        return res;
        
    }
};