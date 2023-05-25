class Solution {
public:
    bool canCross(vector<int>& stones) {
        
        unordered_map<int,unordered_set<int>>map;
        
        map[stones[0]+1]={1};
        
        for(int i=1;i<stones.size();i++)
        {
            int pos=stones[i];
            for(int j:map[pos]){
                map[pos+j].insert(j);
                map[pos+j+1].insert(j+1);
                map[pos+j-1].insert(j-1);
            }
        }        
        return map[stones.back()].size()!=0; 
    }
};