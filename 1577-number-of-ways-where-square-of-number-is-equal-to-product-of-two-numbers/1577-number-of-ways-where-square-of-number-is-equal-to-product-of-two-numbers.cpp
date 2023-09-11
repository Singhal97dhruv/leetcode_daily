class Solution {
public:
    
    
    int func(vector<int>&nums1,vector<int>&nums2){
        int ans=0;
        unordered_map<int,int>map;
        for(int i:nums2)map[i]++;
        for(int i:nums1){
            long tar=(long)i*i;
            
            for(auto [n,cnt]:map){
                if(tar%n || map.count(tar/n)==0)continue;
                if(tar/n==n)ans+=cnt*(cnt-1);
                else{
                    ans+=cnt*map[tar/n];
                }
            }
        }
        return ans/2;
    }
    
    
    
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        return func(nums1,nums2) + func(nums2,nums1);
    }
};