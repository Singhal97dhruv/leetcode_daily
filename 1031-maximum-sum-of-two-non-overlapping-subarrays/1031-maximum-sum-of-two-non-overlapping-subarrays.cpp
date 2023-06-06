class Solution {
public:
    
    int maxSub(vector<int>&prefix,int m,int n){

        int ans=0,ml=0;
        for(int i=m+n;i<prefix.size();i++){
            ml=max(ml,prefix[i-n]-prefix[i-n-m]);
            ans=max(ans,ml+prefix[i]-prefix[i-n]);
        }
        return ans;
    }
    
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        
        vector<int>prefix(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        return max(maxSub(prefix,firstLen,secondLen),maxSub(prefix,secondLen,firstLen));
    }
};