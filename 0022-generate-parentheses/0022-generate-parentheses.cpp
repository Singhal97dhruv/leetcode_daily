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
    vector<string>res;
    void GenParenthesis(int n1,int n2,string pattern){
        if(n1==0 && n2==0){
            res.push_back(pattern);
            return ;
        }
        
        if(n1>0){
            GenParenthesis(n1-1,n2+1,pattern+'(');
        }
        
        if(n2>0){
            GenParenthesis(n1,n2-1,pattern+')');
        }
        
    }
    
    // vector<string>res;
//     void recur(string curr,int leftPths, int rightPths){
        
//         if(leftPths==0 && rightPths==0)
//         {
//             res.push_back(curr);
//             return ;
//         }
            
//         if(leftPths>0){
//             recur(curr+'(',leftPths-1,rightPths+1);
//         }
//         if(rightPths>0){
//             recur(curr+')',leftPths,rightPths-1);
//         }
        
//     }
    
    
    
    
    vector<string> generateParenthesis(int n) {
        // vector<string> paren;
        // genpar(paren,"",n,0);
        // return paren;
        
        
        // vector<string>res;
        // recur("",n,0);
        GenParenthesis(n,0,"");
        return res;
        
        
        
    }
};