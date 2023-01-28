class Solution {
public:
    bool closeStrings(string word1, string word2) {
//         vector<int>f1(26),f2(26);
//         for(char c:word1)f1[c-'a']++;
//         for(char c: word2)f2[c-'a']++;
        
//         return multiset(f1.begin(),f1.end())==multiset(f2.begin(),f2.end()) && unordered_set(word1.begin(),word1.end())==unordered_set(word2.begin(),word2.end());
        
       vector<int>w1(26),w2(26),w3(26),w4(26);
        for(char c: word1)
            w1[c-'a']++,w2[c-'a']=1;
        for(char c:word2)
            w3[c-'a']++,w4[c-'a']=1;
        sort(w1.begin(),w1.end());
        sort(w3.begin(),w3.end());
        return w1==w3 && w2==w4;
    }
};