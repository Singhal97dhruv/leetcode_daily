class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s(26,0),res(26,0);
       for(char c:s1){
           s[c-'a']++;
       }
    
    for(int i=0;i<s2.size();i++){
        res[s2[i]-'a']++;
        if(i>=s1.size()){
            res[s2[i-s1.size()]-'a']--;
        }    if(s==res)return true;
        
    }
    return false;
    
    
    
    }
};