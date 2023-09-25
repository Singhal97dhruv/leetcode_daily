class Solution {
public:
    char findTheDifference(string s, string t) {
     vector<int>trie(26,0);
        for(int i=0;i<s.size();i++){
            trie[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            if(trie[t[i]-'a']!=0){
                trie[t[i]-'a']--;
            }
            else{
                return t[i];
            }
        }
        return NULL;
        
        
        
    }
};