class Solution {
public:

    bool check(string str1,string str2){
        for(int i=0;i<str1.size();i++){
            if(str1[i]>str2[i])return false;
        }
        return true;
    }
    
    int minDeletionSize(vector<string>& strs) {

        vector<string>str;
        for(int i=0;i<strs[0].size();i++){
            string s;
            for(int j=0;j<strs.size();j++){
                s+=strs[j][i];
            }
            str.push_back(s);
        }
        
        vector<int>dp(strs[0].size()+1,1);
        
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<i;j++){
                if(check(str[j],str[i]) && dp[j]+1>dp[i])
                    dp[i]=dp[j]+1;
            }
        }
        
        return strs[0].size()-*max_element(dp.begin(),dp.end());
    }
};