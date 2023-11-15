class Solution {
public:
    int countPalindromicSubsequence(string s) {
    //     int first[26] = {[0 ... 25] = INT_MAX}, last[26] = {}, res = 0;
    // for (int i = 0; i < s.size(); ++i) {
    //     first[s[i] - 'a'] = min(first[s[i] - 'a'], i);
    //     last[s[i] - 'a'] = i;
    // }
    // for (int i = 0; i < 26; ++i)
    //     if (first[i] < last[i])
    //         res += unordered_set<char>(begin(s) + first[i] + 1, begin(s) + last[i]).size();
    // return res;
        
        
        int fst[26]={[0 ... 25]=INT_MAX},lst[26]={},res=0;
        for(int i=0;i<s.size();i++){
            fst[s[i]-'a']=min(fst[s[i]-'a'],i);
            lst[s[i]-'a']=i;
        }
        
        for(int i=0;i<26;i++){
            if(fst[i]<lst[i])
            res+=unordered_set<int>(s.begin()+fst[i]+1,s.begin()+lst[i]).size();
        }
        
        return res;        
    }
};