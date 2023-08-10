class Solution {
public:
    string reverseWords(string s) {
        
        stack<string>stk;
        string tempWord="";
        int i=0,n=s.size();
        while(i<n){
            if(s[i]==' '){
                if(tempWord!=""){
                    stk.push(tempWord);
                    tempWord="";
                }
                while(i<n && s[i]==' ')i++;
            }
            else
            tempWord+=s[i++];
        }
        if(tempWord!="")stk.push(tempWord);
        
        string ans="";
        while(stk.size()>1){
            ans+=stk.top();stk.pop();
            ans+=" ";
        }
        return ans+stk.top();
        
    }
};