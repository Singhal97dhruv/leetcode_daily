class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i=0,j=0;
        unordered_map<char,int>map;
        int res=0;
        for(;j<s.size();j++){
            if(map[s[j]]){
                while(s[i]!=s[j]){
                    map.erase(s[i]);
                    i++;
                }
                map.erase(s[i]);
                i++;
            }
                map[s[j]]++;
            res=max(res,j-i+1);
        }
        return res;
    }
};