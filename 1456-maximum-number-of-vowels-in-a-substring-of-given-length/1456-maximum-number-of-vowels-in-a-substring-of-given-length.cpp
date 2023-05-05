class Solution {
public:
    bool isVowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int maxVowels(string s, int k) {
        
        int i=0,j=0;
        int cntVowels=0;
        for(j=0;j<k;j++)if(isVowel(s[j]))cntVowels++;
        int windowVowels=cntVowels;
        for(j;j<s.size();j++,i++){
            if(isVowel(s[j]) && !isVowel(s[i])){
                windowVowels++;
                cntVowels=max(cntVowels,windowVowels);
            }
            else if(!isVowel(s[j]) && isVowel(s[i]))windowVowels--;
        }
        return cntVowels;
    }
};