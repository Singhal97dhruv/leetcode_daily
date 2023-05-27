class Solution {
public:
    int dp[52]={[0 ...51]=0};
//     int recur(string s,set<string>&set,int idx){
//         if(idx>=s.size())return 0;
//         int ans=0;
//         if(dp[idx]!=-1)return dp[idx];
//         ans=recur(s,set,idx+1);

//         for(int i=0;i+idx<s.size();i++){
//             if(set.find(s.substr(idx,i+1))!=set.end()){
//                 ans=max(i+1+recur(s,set,idx+i+1),ans);
                
//             }
           
//         }
//         return dp[idx]= ans;
//     }
    
    int minExtraChar(string s, vector<string>& dictionary) {
        set<string>set;
        for(string s:dictionary){
            set.insert(s);
        }
        // return s.size()- recur(s,set,0);
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            dp[i]=dp[i+1];
            for(int j=1;i+j<=s.size();j++){
                if(set.find(s.substr(i,j))!=set.end()){
                    dp[i]=max(dp[i],j+dp[i+j]);
                }
            }
        }
        
        
        
        return n-dp[0];
    }
};