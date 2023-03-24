class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
     
        int cap=0;
        map<int,int>map;
        for(vector<int>v:trips){
            map[v[1]]+=v[0];
            map[v[2]]-=v[0];
        }
        for(auto i:map){
            cap+=i.second;
            if(cap>capacity)return false;
        }
        return true;
    }
};