class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
       vector<int>vect(26,0);
        for(char c: s){
            vect[c-'a']++;
        }
        
        unordered_map<int,int>map;
        for(int i:vect){
            if(i==0)continue;
            map[i]++;
        }
        return map.size()==1;
    }
};