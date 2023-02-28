class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int need=0;
        for(int i:nums){
            need=(need+i)%p;
        }
        int curr=0,res=nums.size();
        unordered_map<int,int>map={{0,-1}};
        for(int i=0;i<nums.size();i++){
            curr=(curr+nums[i])%p;
            map[curr]=i;
            int want=(curr-need+p)%p;
            if(map.count(want)){
                res=min(res,i-map[want]);
            }
        }
        return res<nums.size()?res:-1;
    }
};