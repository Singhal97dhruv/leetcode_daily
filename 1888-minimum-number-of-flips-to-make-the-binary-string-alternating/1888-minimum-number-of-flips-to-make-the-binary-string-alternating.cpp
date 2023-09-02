class Solution {
public:
    int minFlips(string s) {
        
        int n=s.size();
        s+=s;
        string s1,s2;
        for(int i=0,ptr=0;i<s.size();i++){
            s1+=ptr+'0';
            s2+=!ptr+'0';
            ptr=!ptr;
        }
        int mn=INT_MAX;
        int temp1=0,temp2=0;
        for(int i=0;i<s.size();i++){
            if(s1[i]!=s[i])temp1++;
            if(s2[i]!=s[i])temp2++;
            
            if(i>=n){
                if(s[i-n]!=s1[i-n])temp1--;
                if(s[i-n]!=s2[i-n])temp2--;
                mn=min({mn,temp1,temp2});
            }
        }
        return mn;   
    }
};