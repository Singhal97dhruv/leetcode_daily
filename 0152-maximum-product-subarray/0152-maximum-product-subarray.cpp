class Solution {
public:
    int maxProduct(vector<int>& nums) {
//         int res=nums[0],mx=res,mn=res;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<0)swap(mx,mn);
            
//             mx=max(nums[i],mx*nums[i]);
//             mn=min(nums[i],mn*nums[i]);
            
//             res=max(res,mx);
//         }
//         return res;
        
        // int ans=nums[0];
        // int mx=ans,mn=ans;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]<0)swap(mx,mn);
        //     mx=max(nums[i],mx*nums[i]);
        //     mn=min(nums[i],mn*nums[i]);
        //     ans=max(ans,mx);
        // }
        // return ans;
        
        
        int ans=nums[0];
        int mn=ans,mx=ans;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)swap(mn,mx);
            mx=max(mx*nums[i],nums[i]);
            mn=min(mn*nums[i],nums[i]);
            ans=max(mx,ans);
        }
        return ans;
    }
};
