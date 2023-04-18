class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int i=0,j=0;
        while(s.size()<word1.size()+word2.size()){
            if(i<word1.size())
            {s+=word1[i];i++;}
            if(j<word2.size())
            {s+=word2[j];j++;}
        }
        return s;
    }
    
};