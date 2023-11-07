class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map<int,int>map;
        for(int i:nums){
            map[i]++;
        }
        
        vector<vector<int>>ans;
        while(!map.empty()){
            vector<int>temp;
            
            for(auto &[key,val]:map)
                temp.push_back(key);
            
            for(int i:temp){
                if(--map[i]==0)map.erase(i);
            }
            
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};