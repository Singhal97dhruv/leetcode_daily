class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        //  stack<long long> st;
        // for(auto x : tokens){
        //     if(x!="+" && x!="-" && x!="*" && x!="/"){
        //         st.push(stoi(x));
        //     }
        //     else{
        //         long long a = st.top();
        //         st.pop();
        //         long long b = st.top();
        //         st.pop();
        //         if(x == "+")
        //             st.push(b+a);
        //         else if(x=="-")
        //             st.push(b-a);
        //         else if(x=="*")
        //             st.push(b*a);
        //         else
        //             st.push(b/a);
        //     }
        // }
        // return st.top();
        
        
        // unordered_map<string,function<int(int,int)>>map={
        //     {"+", [](int a,int b){return a+b;}},
        //     {"-", [](int a,int b){return a-b;}},
        //     {"*", [](int a,int b){return a*b;}},
        //     {"/", [](int a,int b){return a/b;}}

        // };
        
//       stack<int>stk;
//         for(int i=0;i<tokens.size();i++){
//             if(tokens[i]!="+" && tokens[i]!="*" && tokens[i]!="/" && tokens[i]!="-"){
//                 stk.push(stoi(tokens[i]));
//             }
//             else{
//                 int x=stk.top();stk.pop();
//                 int y=stk.top();stk.pop();
//                 if(tokens[i]=="+")stk.push(x+y);
//                 else if(tokens[i]=="/")stk.push(y/x);
//                 else if(tokens[i]=="*")stk.push(x*y);
//                 else if(tokens[i]=="-")stk.push(y-x);

//             }
//         }
//         return stk.top();
        
        
        stack<int>stk;
        for(int i=0;i<tokens.size();i++){
            
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
            {
                stk.push(stoi(tokens[i]));
            }
            
            else{
                int n1=stk.top();stk.pop();
                int n2=stk.top();stk.pop();
                
                if(tokens[i]=="+"){
                    stk.push(n1+n2);
                }
                else if(tokens[i]=="-")
                    stk.push(n2-n1);
                else if(tokens[i]=="*")
                    stk.push(n1*n2);
                else
                    stk.push(n2/n1);
                
            }
            
        }
        return stk.top();
        
    }
};