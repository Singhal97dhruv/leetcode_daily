class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n=nums.size();
        vector<int>vect(n+1);
        for(int i=0;i<requests.size();i++){
            vect[requests[i][0]]++;
            vect[requests[i][1]+1]--;
        }
        for(int i=1;i<n;i++)
        {
            vect[i]+=vect[i-1];
        }
        sort(vect.begin(),vect.end()-1);
        sort(nums.begin(),nums.end());
        
        long ans=0,mod=1e9+7;
        for(int i=0;i<n;i++){
            ans = (ans + (long)(nums[i])*(vect[i]));
        }
        return ans%mod;
    }
};