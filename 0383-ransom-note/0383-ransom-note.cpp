class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // unordered_map<char,int>map;
        // for(char c:magazine)map[c]++;
        // for(char c:ransomNote){
        //     if(map[c])map[c]--;
        //     else return false;
        // }
        // return true;
      
        unordered_map<char,int>map;
        for(char c:magazine){
            map[c]++;
        }
        for(char c:ransomNote){
            if(map[c]==0)return false;
            map[c]--;
            // if(map[c]==0)map.erase(c);
        }
        return true;
    }
};