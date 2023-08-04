class Solution {
public:
    int calculate(string s) {
        
//         stack<int>st;
//         char sign='+';
//         long tmp=0;
        
//         for(unsigned int i=0;i<s.size();i++){
//             if(isdigit(s[i]))
//                 tmp=tmp*10 + s[i]-'0';
//             if(!isdigit(s[i]) && !isspace(s[i]) || i==s.size()-1 ){
//                 if(sign=='-')
//                     st.push(-tmp);
//                 else if(sign=='+')
//                     st.push(tmp);
//                 else{
                    
//                     int num=st.top();
//                     st.pop();
//                     cout<<sign<<" ";
//                     if(sign=='*')
//                         num=num*tmp;
//                     else
//                         num=num/tmp;
//                     st.push(num);
//                 }
//                 sign=s[i];
//                 tmp=0;
                
//             }
//         }
//         int res=0;
//         while(!st.empty()){
//             res+=st.top();
//             st.pop();
//         }
//         return res;
        
       stack<int>stk;
        char sign='+';
        long tempNum=0;
    
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                tempNum=tempNum*10+(s[i]-'0');
            }
            if(!isdigit(s[i]) && !isspace(s[i]) || i==s.size()-1){
                if(sign=='+'){
                    stk.push(tempNum);
                }
                else if(sign=='-'){
                    stk.push(-tempNum);
                }
                else{
                    int num;
                    if(sign=='*')
                        num=stk.top()*tempNum;
                    else
                        num=stk.top()/tempNum;
                    stk.pop();
                    stk.push(num);
                }
                sign=s[i];
                tempNum=0;
            }
        }
        
        long ans=0;
        while(!stk.empty()){
            ans+=stk.top();stk.pop();
        }
        return ans;
    }
};