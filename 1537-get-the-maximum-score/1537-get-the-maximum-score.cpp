class Solution {
public:
    int mod=1e9+7;
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        
        long long ans=0,sum1=0,sum2=0;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                sum1+=nums1[i++];
            }
            else if(nums1[i]>nums2[j]){
                sum2+=nums2[j++];
            }
            else{
                ans+=nums1[i]+max(sum1,sum2);
                i++,j++;
                sum1=0,sum2=0;
            }
        }
        while(i<nums1.size())sum1+=nums1[i++];
        while(j<nums2.size())sum2+=nums2[j++];

        ans+=max(sum1,sum2);
        
        ans=ans%mod;
        
        return (int)ans;
    }
};