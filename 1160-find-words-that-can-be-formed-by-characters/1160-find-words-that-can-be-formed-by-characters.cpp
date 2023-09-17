class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    
        unordered_map<char,int>store,temp;
        for(char c:chars)store[c]++;
        
        int res=0;
        
        for(string s:words){
            
            res+=s.size();
            temp=store;
            for(char c:s){
                if(temp[c]--==0){
                    res-=s.size();
                    break;
                }
            }
        }
        return res;
    }
};