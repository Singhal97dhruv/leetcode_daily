class Solution {
public:
    int MOD=1e9+7;
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        
        long TotSum=0,gain=0;
        set<int>s(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++){
            
            long diff=abs(nums1[i]-nums2[i]);
            TotSum+=diff;
            if(gain<diff){
                
                auto it=lower_bound(s.begin(),s.end(),nums2[i]);
                if(it!=s.begin()){
                    gain=max(gain,diff-abs(*prev(it)-nums2[i]));
                }
                if(it!=s.end()){
                    gain=max(gain,diff-abs(*it-nums2[i]));
                }
                
            }
            
        }
        
        return (TotSum-gain)%MOD;
        
        
    }
};