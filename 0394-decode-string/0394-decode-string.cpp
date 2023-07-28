class Solution {
public:
    
    string recur(string&s,int& idx){
        
        string res;
        
        while(idx<s.size() && s[idx]!=']'){
            if(!isdigit(s[idx])){
                res+=s[idx++];
                
            }
            else{
                int num=0;
                while(idx<s.size() && isdigit(s[idx])){
                    num =num*10+ (s[idx++]-'0');
                }
                
                idx++;
                string temp=recur(s,idx);
                idx++;
                while(num--){
                    res+=temp;
                }
                
                
            }
        }
        return res;
        
    }
    
    string decodeString(string s) {
//         stack<char>st;
//         for(char c:s){
//             if(c!=']'){
//                 st.push(c);
//             }
//             else{
//                 string str="";
//                 while(!st.empty() && st.top()!='['){
//                     str=st.top()+str;
//                     st.pop();
//                 }
//                 st.pop();
               
//                 string number = "";
          
                
//                 while(!st.empty() && isdigit(st.top())){
//                     number = st.top() + number;
//                     st.pop();
//                 }
//                 int k_time = stoi(number); 
//                 while(k_time--){
//                     for(int i=0;i<str.size();i++){
//                         st.push(str[i]);
//                     }
//                 }
//             }
//         }
//         s="";
//         while(!st.empty()){
//             s+=st.top();
//             st.pop();
//         }
//         reverse(s.begin(),s.end());
//         return s;
        int num=0;
       return recur(s,num);
    }
};