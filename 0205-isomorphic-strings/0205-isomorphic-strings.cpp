class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>map;
        unordered_set<char>set;
       
        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end()){
                if(map[s[i]]!=t[i])
                    return false;
            }
            else{
                if(set.find(t[i])!=set.end())return false;
                map[s[i]]=t[i];
                set.insert(t[i]);
            }
        }
        return true;
        
    }
};