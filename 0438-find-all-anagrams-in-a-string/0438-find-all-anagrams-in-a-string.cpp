class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
//         vector<int>ps(26,0),su(26,0),res;
        if(s.size()<p.size()){
            return {};
        }
//         for(int i=0;i<p.size();i++){
//             ++ps[p[i]-'a'];
//             ++su[s[i]-'a'];
//         }
//         if(ps==su){
//             res.push_back(0);
//         }
//         int x=p.size();
//         for(int i=x;i<s.size();i++){
//             ++su[s[i]-'a'];
            
//             --su[s[i-x]-'a'];
            
//             if(su==ps){
//                 res.push_back(i-x+1);
//             }
//         }
//         return res;
        
        
//         vector<int>ori(26,0);
//         vector<int>dup(26,0);
//         vector<int>ans;
//         for(char c:p)ori[c-'a']++;
        
//         int i=0,j=0;
        
//         for(;j<p.size();j++)
//             dup[s[j]-'a']++;
//         for(;j<=s.size();j++){

//             if(ori==dup)ans.push_back(i);
//             dup[s[i]-'a']--;
//             i++;
//             if(j<s.size())
//             dup[s[j]-'a']++;
//         }
//         return ans;
        
        
        
        vector<int>actual(26,0),testing(26,0),ans;
        
        for(char c:p)actual[c-'a']++;
        
        int i;
            for(int i=0;i<p.size()-1;i++)
                testing[s[i]-'a']++;
        for(int j=p.size()-1,i=0;j<s.size();j++){
            testing[s[j]-'a']++;
            if(testing==actual)ans.push_back(i);
            testing[s[i++]-'a']--;
        }
        return ans;
        
    }
};