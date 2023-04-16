class Solution {
public:
    vector<vector<int>>dp;
    vector<vector<int>>freq;
    int mod=1e9+7;
    long recur(vector<string>&words,string target,int k,int idx){
        if(idx==target.size())return 1;
        if(k== words[0].size() || words[0].size() - k < target.size() - idx)return 0;
        if(dp[k][idx]!=-1)return dp[k][idx];
        long cnt=0;
        
        int currPos=target[idx]-'a';
        cnt=cnt+recur(words,target,k+1,idx);
        cnt += freq[k][currPos] * recur(words, target, k + 1, idx + 1);
        // cnt=(cnt+(freq[k][currPos]*(recur(words,target,k+1,idx+1))%mod)%mod);
        
        // for(int i=0;i<words.size();i++){
        //     for(int j=k;j<words[i].size();j++){
        //         if(target[idx]==words[i][j]){
        //           cnt=(cnt+recur(words,target,j+1,idx+1)%mod)%mod;
        //         }
        //     }
        // }
        return dp[k][idx]= cnt%mod;
    }
    
    int numWays(vector<string>& words, string target) {
        dp.resize(words[0].size(),vector<int>(target.size(),-1));
        freq.resize(words[0].size(),vector<int>(26,0));
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                freq[j][words[i][j]-'a']++;
            }
        }
        return recur(words,target,0,0);
    }
};