class Solution {
public:
    bool canConstruct(string s, int k) {
     
        if(s.size()<k)return false;
        unordered_map<int,int>map;
        for(char c:s){
            map[c]++;
        }
        
        for(auto i:map){
            if(i.second%2!=0){
                k--;
            }
        }
        return k>=0;
        
    }
};