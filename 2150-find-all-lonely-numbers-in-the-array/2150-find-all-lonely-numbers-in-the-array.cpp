class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
     
     unordered_map<int,int>map;

        for(int i:nums)map[i]++;
        
        vector<int>ans;
        
        for(auto [i,j]: map){
            if(j==1 && map.count(i-1)==0 && map.count(i+1)==0)ans.push_back(i);
        }
        return ans;
        
    }
};