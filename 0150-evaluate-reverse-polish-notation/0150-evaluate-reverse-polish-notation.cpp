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
        
        // stack<int>st;
        // for(string c:tokens){
        //     if(c=="*" || c=="-" || c=="/" || c=="+"){
        //         int s1=st.top();
        //         st.pop();
        //         int s2=st.top();
        //         st.pop();
        //         st.push(map[c](s2,s1));
        //         // int cal=s2 stoi(c) s1;
        //         // st.push(cal);
        //     }
        //     else{
        //         st.push(stoi(c));
        //     }
        // }
        // return st.top();
        
        stack<long long>stk;
        for(auto ss:tokens){
            if(ss!="+" && ss!="-" && ss!="*" && ss!="/")stk.push(stoi(ss));
            
            else{
                long long a=stk.top();
                stk.pop();
                long long b=stk.top();
                stk.pop();
                if(ss=="+")stk.push(a+b);
                else if(ss=="*")stk.push(a*b);
                else if(ss=="/")stk.push(b/a);
                else if(ss=="-")stk.push(b-a);

            }
            
        }
        return stk.top();
        
        
        
    }
};