class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        
        long long rem=0;vector<int>res(word.size(),0);
        for(int i=0;i<word.size();i++){

            rem=(10*rem+(word[i]-'0'))%m;
            if(rem==0)res[i]=1;
            
        }
        return res;
            
    }
};