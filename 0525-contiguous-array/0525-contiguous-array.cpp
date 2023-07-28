class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     
//        unordered_map<int,int>mp;
//         mp[0]=-1;
//         for(int i=0;i<nums.size();i++){
//             nums[i]==0?nums[i]=-1:nums[i]=1;
//         }
//         int res=0,sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             if(mp.find(sum)!=mp.end()){
//                 res=max(res,i-mp[sum]);
//             }
//             else{
//                 mp[sum]=i;
//             }
//         }
//         return res;
        
        unordered_map<int,int>map;
        map[0]=-1;
        for(int &i:nums)i=i==0?-1:1;
        int sum=0,res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(map.find(sum)!=map.end()){
                res=max(res,i-map[sum]);
            }
            else{
                map[sum]=i;
            }
        }
        return res;
        
    }
};