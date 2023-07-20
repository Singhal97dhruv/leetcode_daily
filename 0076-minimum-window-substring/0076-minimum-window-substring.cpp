class Solution {
public:
    string minWindow(string s, string t) {
        
        
//         string res;
//         if(s.empty() || t.empty())return res;
//         unordered_map<char,int>map,window;
//         for(char c:t)map[c]++;
        
//         int minLength=INT_MAX;
//         int letter_count=0;
//         for(int slow=0,fast=0;fast<s.size();fast++){
//             char c=s[fast];
//             if(map.find(c)!=map.end()){
//                 window[c]++;
//                 if(window[c]<=map[c])letter_count++;
//             }
        
//         if(letter_count>=t.size()){
//             while(map.find(s[slow])==map.end()|| window[s[slow]]>map[s[slow]]){
//                 window[s[slow]]--;
//                 slow++;
//             }
//             if(fast-slow+1<minLength){
//                 minLength=fast-slow+1;
//                 res=s.substr(slow,minLength);
//             }
//         }
//         }
//         return res;
        
        
        string ans="";
        unordered_map<char,int>actWin,dupWin;
        
        for(char c:t){
            actWin[c]++;    
        }
        
        int mn=INT_MAX,len=0,slow=0;
        
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(actWin.find(c)!=actWin.end()){
                dupWin[c]++;
                if(dupWin[c]<=actWin[c])len++;
            }
            if(len>=t.size()){
                while(actWin.find(s[slow])==actWin.end() || actWin[s[slow]]<dupWin[s[slow]]){
                    dupWin[s[slow++]]--;
                }
                if(i-slow+1<mn){
                    mn=i-slow+1;
                    ans=s.substr(slow,mn);
                }
            }
        }
        
        return ans;
        
    }
};