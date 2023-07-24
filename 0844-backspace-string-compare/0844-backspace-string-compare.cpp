class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string c1,c2;
        int cntBspcs=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='#')cntBspcs++;
            else{
                if(cntBspcs){
                    cntBspcs--;
                    continue;
                }
                c1+=s[i];
            }
        }
        cntBspcs=0;
         for(int i=t.size()-1;i>=0;i--){
            if(t[i]=='#')cntBspcs++;
            else{
                if(cntBspcs){
                    cntBspcs--;
                    continue;
                }
                c2+=t[i];
            }
        }
        return c1==c2?true:false;
    }
};