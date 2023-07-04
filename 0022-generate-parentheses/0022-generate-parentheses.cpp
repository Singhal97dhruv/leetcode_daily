class Solution {
public:
//     void genpar(vector<string> &paren,string st,int n,int m){
//         if(n==0 && m==0 ){
//             paren.push_back(st);
//         }
//         if(n>0){
//             // st.push_back
//             genpar(paren,st+"(",n-1,m+1);
//         }
//         if(m>0)
//             genpar(paren,st+")",n,m-1);
//     }
    
    
    void recur(string s,int n,int m,vector<string>&ans){
        
        if(n==0 && m==0){
            ans.push_back(s);
            return;
        }
        
        if(n>0){
            recur(s+"(",n-1,m+1,ans);
            
        }
        if(m>0){
            recur(s+")",n,m-1,ans);
        }
    
    }
    
    
    
    
    vector<string> generateParenthesis(int n) {
        // vector<string> paren;
        // genpar(paren,"",n,0);
        // return paren;
        
        
        vector<string>res;
        recur("",n,0,res);
        return res;
        
        
        
    }
};