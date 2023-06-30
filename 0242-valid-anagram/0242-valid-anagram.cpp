class Solution {
public:
    bool isAnagram(string s, string t) {
        
       //  int count=0;
       //  unordered_map<char,int>map;
       //  for(char c:s){
       //      map[c]++;
       //      count++;
       //  }
       //  for(char c:t){
       //      if(map[c])map[c]--;
       //      else return false;
       //      count--;
       //  }        
       // return count==0?true:false;
        if(s.size()!=t.size())return false;
        
        unordered_map<char,int>map;
        for (char c:s)map[c]++;
        
        for(char c: t){
            if(!map[c])return false;
            map[c]--;
            if(map[c]==0)map.erase(c);
        }
        return map.size()==0?true:false;
        
    }
};