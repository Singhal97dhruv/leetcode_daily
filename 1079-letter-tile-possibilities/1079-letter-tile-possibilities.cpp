class Solution {
public:
    
    void recur(string T,string S,unordered_map<int,int>&map,unordered_set<string>& set){
        
        for(int i=0;i<T.size();i++){
            
            if(map[i]==0){
                S+=T[i];
            
                set.insert(S);
                map[i]=1;
                recur(T,S,map,set);
                map[i]=0;
                S.pop_back();
                
            }
            
        }
        
    }
    
    
    int numTilePossibilities(string tiles) {
        unordered_map<int,int>map;
        unordered_set<string>set;
        recur(tiles,"",map,set);
        return set.size();
    }
};