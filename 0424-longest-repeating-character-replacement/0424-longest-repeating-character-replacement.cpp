class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>vect(26,0);
        int st=0;
        int mxCharCnt=0;
        int res=0;
        for(int end=0;end<s.size();end++){
            vect[s[end]-'A']++;
            if(mxCharCnt<vect[s[end]-'A']){
                mxCharCnt=vect[s[end]-'A'];
            }
            while(end-st-mxCharCnt+1>k){
                vect[s[st]-'A']--;
                st++;
            }
            res=max(res,end-st+1);
        }
        
        return res;
    }
};