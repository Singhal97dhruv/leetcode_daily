class Solution {
public:
    int longestValidParentheses(string s) {
        // stack<int>st;
        // int longest=0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='(')st.push(i);
        //     else{
        //         if(!st.empty()){
        //             if(s[st.top()]=='(')st.pop();
            //         else st.push(i);
        //         }
        //         else
        //             st.push(i);
        //     }
        // }
        // int a=s.size(),b=0;
        // if(st.empty())return s.size();
        // while(!st.empty()){
        //     b=st.top();
        //     st.pop();
        //     longest=max(longest,a-b-1);
        //     a=b;
        // }
        // longest=max(longest,a);
        // return longest;
        
        stack<int>stk;
        stk.push(-1);
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')stk.push(i);
            else{
                stk.pop();
                if(stk.empty())stk.push(i);
                else{
                    res=max(res,i-stk.top());
                }
            }
        }
        
        return res;
    }
};