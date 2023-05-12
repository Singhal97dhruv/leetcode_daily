class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int mxNum=-1,mxIdx=-1,li=-1,ri=-1;
        
    
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]-'0'>mxNum){
                mxNum=s[i]-'0';
                mxIdx=i;
            }
            else if(s[i]-'0'<mxNum){
                li=i;
                ri=mxIdx;
            }
        }
        if(li!=-1)swap(s[li],s[ri]);
        return stoi(s);
        
    }
};