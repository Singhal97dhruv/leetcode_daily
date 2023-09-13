class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        unordered_map<int,int>map;
        int res=0;
        
        for(int i:nums){
            if(map.find(i+k)!=map.end()){
                res+=map[i+k];
            }
            if(map.find(i-k)!=map.end()){
                res+=map[i-k];
            }
            map[i]++;
        }
        return res;
        
    }
};