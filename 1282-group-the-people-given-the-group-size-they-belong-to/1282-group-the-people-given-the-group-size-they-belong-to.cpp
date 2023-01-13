class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int>>res;
        unordered_map<int,vector<int>>map;
        for(int i=0;i<groupSizes.size();i++){
            int key=groupSizes[i];
            
            map[key].push_back(i);
            
            if(map[key].size()==key){
                res.push_back(map[key]);
                map.erase(key);
            }
            
        }
        return res;
    }
};