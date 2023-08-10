class Solution {
public:
    string reverseWords(string s) {
        
//         stack<string>stk;
//         string tempWord="";
//         int i=0,n=s.size();
//         while(i<n){
//             if(s[i]==' '){
//                 if(tempWord!=""){
//                     stk.push(tempWord);
//                     tempWord="";
//                 }
//                 while(i<n && s[i]==' ')i++;
//             }
//             else
//             tempWord+=s[i++];
//         }
//         if(tempWord!="")stk.push(tempWord);
        
//         string ans="";
//         while(stk.size()>1){
//             ans+=stk.top();stk.pop();
//             ans+=" ";
//         }
//         return ans+stk.top();
        
        stringstream ss(s);
        vector<string>vect;
        string ans="",temp;
        while(ss>>temp){
            vect.push_back(temp);
        }
        for(int i=vect.size()-1;i>=1;i--){
            ans=ans+vect[i]+" ";
        }
        return ans+vect[0];
    }
};