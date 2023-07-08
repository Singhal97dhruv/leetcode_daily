class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        int n=temperatures.size();
//         vector<int>res(n,0);
//         stack<int>st;
//         for(int i=n-1;i>=0;i--){
          
//                 while(st.size() && temperatures[st.top()]<=temperatures[i]){
//                     st.pop();
//                 }
//                 if(!st.empty())
//                 res[i]= st.top()-i;
            
//                 st.push(i);

//             }
        
//         return res;
        
        int n=temperatures.size();
        vector<int>res(n,0);
        stack<int>stk;
        for(int i=n-1;i>=0;i--){
            while(stk.size() && temperatures[stk.top()]<=temperatures[i])stk.pop();
            if(!stk.empty())res[i]=stk.top()-i;
            stk.push(i);
        }
        return res;
        
    }
};