class Solution {
public:
    int lengthOfLastWord(string s) {
        int sz=0;
        int n=s.size()-1;
        while(n>0 && s[n]==' ')n--;
        for(int i=n;i>=0;i--){
            if(s[i]==' ')return sz;
            sz++;
        }
        return sz;
    }
};