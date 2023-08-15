class Solution {
public:
    bool isValid(string s) {
     
        // unordered_map<char,char>map;
        // stack<char>tuf;
        // map['}']='{';
        // map[']']='[';
        // map[')']='(';
        // for(char c:s){
        //     if(c=='('||c=='{'||c=='['){
        //         tuf.push(c);
        //     }
        //     else{
        //         if(!tuf.empty() &&tuf.top()==map[c])
        //             tuf.pop();
        //         else{
        //             return false;
        //         }
        //     }
        // }
        // if(tuf.empty())return true;
        // return false;
        
        
//         stack<char>st;
        
//         for(char c:s){
            
//             if(c=='(' || c=='{' || c=='['){
//                 if(c=='(')st.push(')');
//                 if(c=='{')st.push('}');
//                 if(c=='[')st.push(']');
//             }
//             else if(!st.empty() && st.top()==c){
//                 st.pop();
//             }
//             else return false;
            
//         }
//         if(!st.empty())return false;
//         return true;
        
        
      stack<char>stk;
        for(char c:s){
            if(c=='(')stk.push(')');
            else if(c=='{')stk.push('}');
            else if(c=='[')stk.push(']');
            else if(stk.empty() || stk.top()!=c)return false;
            else stk.pop();
        }
        return stk.empty();
        
        
    }
};