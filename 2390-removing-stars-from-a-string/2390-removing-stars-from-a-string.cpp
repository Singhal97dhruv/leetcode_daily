class Solution {
public:
    string removeStars(string s) {
        
        stack<char>st;
        for(char c:s){
            if(!st.empty() && c=='*'){
                st.pop();
            }
            else st.push(c);
        }
        string res(st.size(),'*');
        for(int i=st.size()-1;i>=0;i--){
            res[i]=st.top();
            st.pop();
        }
        return res;
        
        // int j=0;
        // for(char c:s){
        //     if(c=='*'){
        //         j--;
        //     }
        //     else{
        //         s[j++]=c;
        //     }
        // }
        // return s.substr(0,j);     
    }
};