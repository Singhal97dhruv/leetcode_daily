class Solution {
public:
    bool dp[301]={false};
//     bool recur(string s,vector<string>&dict,int idx){
//         if(idx==s.size())return true;
//         if(dp[idx])return true;
//         int n=s.size();
//         bool flag=false;
//         for(int i=0;i<dict.size();i++){
//             cout<<dp[4];
//             if((idx+dict[i].size())<=n && s.substr(idx,dict[i].size())==dict[i])
//                 flag=flag|| recur(s,dict,idx+dict[i].size());
//         }
        
//         return dp[idx]= flag;
//     }
    
    
// 
//     bool recur(string s,int idx,vector<string>&words){
//         if(idx>=s.size())return true;
        
//         bool ans=false;
        
//         for(string w:words){
//             if(idx+w.size()<=s.size() && s.substr(idx,w.size())==w)
//                 ans|= recur(s,idx+w.size(),words);
//         }
//         return ans;
        
        
//     }
    
    
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
        // return recur(s,wordDict,0);
            // return recur(0,wordDict,s);
        dp[s.size()]=true;
        int n=s.size();
        // for(int i=n-1;i>=0;i--){
        //     for(string w:wordDict){
        //         if(i+w.size()<=n && s.substr(i,w.size())==w )
        //             dp[i]=dp[i+w.size()];
        //         if(dp[i])break;
        //     }
        // }
        // return dp[0];

        // for(int i=n-1;i>=0;i--){
        //     for(string w:wordDict){
        //         if(i+w.size()<=n && s.substr(i,w.size())==w)
        //             dp[i]=dp[i+w.size()];
        //         if(dp[i])break;
        //     }
        // }
        // return dp[0];
        
        
//         unordered_set<string>dict;
//         for(string st: wordDict){
//             dict.insert(st);
//         }
     
//         vector<bool>dp(s.size()+1,false);
//         dp[0]=true;
//         for(int i=1;i<=s.size();i++){
//             for(int j=i-1;j>=0;j--){
//                 if(dp[j]){
//                     string word=s.substr(j,i-j);
//                     if(dict.find(word)!=dict.end()){
//                         dp[i]=true;
//                         break;
//                     }
//                 }
//             }
//         }
//         return dp[s.size()];
        
        
        // return recur(s,0,wordDict);
        
//         for(int i=s.size()-1;i>=0;i--){
            
//             for(string w:wordDict){
//                 if(i+w.size()<=s.size()){
//                     if(s.substr(i,w.size())==w)
//                     {
//                         dp[i]=dp[i+w.size()];
//                         if(dp[i])break;
//                     }
//                 }
//             }
            
//         }
        for(int i=s.size()-1;i>=0;i--){
            for(string w:wordDict){
                if(i+w.size()<=s.size()){
                    if(s.substr(i,w.size())==w)dp[i]=dp[i+w.size()];
                    if(dp[i])break;
                }
            }
        }
        
        
        return dp[0];
        
    }
};