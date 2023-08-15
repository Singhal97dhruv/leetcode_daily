class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int,int>map;
//         for(int i=1;i<=nums.size();i++){
//             if(map[nums[i-1]]!=0 && (abs(map[nums[i-1]]-i)<=k) ){
//             return true;
//             }
//                 map[nums[i-1]]=i;
            
//         }
//         return false;
        
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
                if(map.find(nums[i])!=map.end()){
                    if(abs(map[nums[i]]-i)<=k)return true;
                }
            map[nums[i]]=i;
        }
        return false;
    }
};