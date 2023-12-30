class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        int totLen=0;
        for(string s:words){
            totLen+=s.size();
        }
        
        if(totLen%words.size()!=0)return false;
        
        unordered_map<char,int>map;
        for(string s:words){
            for(char c:s){
                map[c]++;
            }
        }
        
        for(auto i:map){
            if(i.second%words.size()!=0)return false;
        }
        return true;
    }
};