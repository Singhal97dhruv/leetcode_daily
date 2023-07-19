class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int>res(nums.size(),1);
        
//         int curr=1;
//         for(int i=0;i<nums.size();i++){
//             res[i]*=curr;
//             curr*=nums[i];
//         }
//         curr=1;
//         for(int i=nums.size()-1;i>=0;i--){
//             res[i]*=curr;
//             curr*=nums[i];
//         }
//         return res;
        
        
//         int n=nums.size();
//         vector<int>pref,suff;
//         pref=nums;
//         suff=nums;
//         for(int i=1;i<n;i++)pref[i]*=pref[i-1];
//         for(int i=n-2;i>=0;i--)suff[i]*=suff[i+1];
        
//         vector<int>res;
//         for(int i=0;i<n;i++){
//             if(i==0)res.push_back(suff[i+1]);
//             else if(i==n-1)res.push_back(pref[i-1]);
//             else res.push_back(pref[i-1]*suff[i+1]);
//         }
//         return res;
        
//         int n=nums.size();
//         int curr=1;
//         vector<int>res(n,1);
//         for(int i=0;i<n;i++){
//             res[i]*=curr;
//             curr*=nums[i];
//         }
//         curr=1;
//         for(int i=n-1;i>=0;i--){
//             res[i]*=curr;
//             curr*=nums[i];
//         }
//         return res;
        
        int n=nums.size();
        vector<int>ans(n,1);
        int temp=1;
        for(int i=0;i<n;i++){
            ans[i]*=temp;
            temp*=nums[i];
        }
        temp=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=temp;
            temp*=nums[i];
        }
        return ans;
        
    }
};