class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
//         stack<int>st;
        
//         for(int i=0;i<asteroids.size();i++){
//             if(asteroids[i]>0)st.push(asteroids[i]);
//             else{
//                 while(!st.empty() && st.top()>0 && st.top()<abs(asteroids[i])){
//                     st.pop();
//                 }
//                 if(!st.empty() && st.top()>0){
//                     if(st.top()==abs(asteroids[i])){st.pop();}
                    
//                 }
//                 else{
//                     st.push(asteroids[i]);
//                 }
//             }
//         }
        
//         vector<int>res(st.size());
//         for(int i=st.size()-1;i>=0;i--){
//             res[i]=st.top();st.pop();
//         }

//         return res;
        
        
        stack<int>stk;
        for(int i:asteroids){
            if(i>0)stk.push(i);
            else{
                while(!stk.empty() && stk.top()>0 && stk.top()<-i){
                    stk.pop();
                }
                if(!stk.empty() && stk.top()>0)
                {
                    if(stk.top()==-i)
                    stk.pop();
                }
                else stk.push(i);
            }
        }
        
        vector<int>res(stk.size());
        for(int i=stk.size()-1;i>=0;i--){
            res[i]=stk.top();stk.pop();
        }
        return res;
        
        
    }
};