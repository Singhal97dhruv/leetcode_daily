class Solution {
public:
    string minWindow(string s, string t) {
        

        unordered_map<char,int>ori,dup;
        string res;
        for(char c: t){
            ori[c]++;
        }
        int len=0,slow=0,mn=INT_MAX;
        for(int i=0;i<s.size();i++){
            
            char c= s[i];
            if(ori.find(c)!=ori.end()){
                dup[c]++;
                if(dup[c]<=ori[c])len++;
            }
            
            if(len>=t.size()){
                while(ori.find(s[slow])==ori.end() || ori[s[slow]]<dup[s[slow]])dup[s[slow++]]--;
                
                if(i-slow+1<mn){
                    mn=min(mn,i-slow+1);
                    res=s.substr(slow,mn);
                }
            }
            
            
            
        }
        return res;
        
//         string ans="";
//         unordered_map<char,int>actWin,dupWin;
        
//         for(char c:t){
//             actWin[c]++;    
//         }
        
//         int mn=INT_MAX,len=0,slow=0;
        
//         for(int i=0;i<s.size();i++){
//             char c=s[i];
//             if(actWin.find(c)!=actWin.end()){
//                 dupWin[c]++;
//                 if(dupWin[c]<=actWin[c])len++;
//             }
//             if(len>=t.size()){
//                 while(actWin.find(s[slow])==actWin.end() || actWin[s[slow]]<dupWin[s[slow]]){
//                     dupWin[s[slow++]]--;
//                 }
//                 if(i-slow+1<mn){
//                     mn=i-slow+1;
//                     ans=s.substr(slow,mn);
//                 }
//             }
//         }
        
//         return ans;
        
//         unordered_map<char,int>original,Duplicate;
//         for(char c: t)
//             original[c]++;
        
//         int mn=INT_MAX,len=0,slow=0;
//         string ans="";
//         for(int i=0;i<s.size();i++){
//            char c=s[i];
//             if(original.find(c)!=original.end()){
//                 Duplicate[c]++;
//                 if(Duplicate[c]<=original[c])len++;
//             }
//             if(len>=t.size()){
//                 while(original.find(s[slow])==original.end() || original[s[slow]]<Duplicate[s[slow]]){
//                     Duplicate[s[slow++]]--;
//                 }
//                 if(i-slow+1<mn){
//                     mn=i-slow+1;
//                     ans=s.substr(slow,mn);
//                 }
//             }
//         }
//         return ans;
    }
};