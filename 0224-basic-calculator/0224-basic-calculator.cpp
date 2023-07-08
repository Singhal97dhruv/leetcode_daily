class Solution {
public:
    int calculate(string s) {
//          long long result=0; 
//         long long num=0, sign=1; 
//         stack<int> nums, ops; 
        
//         for(int i=0; i<s.size(); ++i){
//             char c=s[i];
//             if(c>='0' && c<='9'){
//                 num=10*num + c-'0'; 
//             }else if(c=='+'){
//                 result+=num*sign; 
//                 num=0;
//                 sign=1;   
//             }else if(c=='-'){
//                 result+=num*sign; 
//                 num=0; 
//                 sign=-1; 
//             }else if(c=='('){
//                 nums.push(result);    
//                 ops.push(sign); 
//                 result=0;  
//                 sign=1;
//             }else if(c==')' && ops.size()){ 
//                 result+=num*sign; 
//                 num=0;
                
//                 result = result*ops.top() + nums.top(); 
//                 nums.pop();
//                 ops.pop();
//             }
//         }
//         result+=num*sign; 
//         return result; 
        
       
        long long res=0,num=0;
        int sign=1;
        stack<int>cal,opr;
        
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='+'){
                res+=sign*num;
                num=0;
                sign=1;
            }
            else if(s[i]=='-'){
                res+=sign*num;
                num=0;
                sign=-1;
            }
            else if(s[i]=='('){
                cal.push(res);
                opr.push(sign);
                res=0;sign=1;
                
            }
            else if(s[i]==')' && opr.size()){
                res+=num*sign;
                res=res*opr.top()+cal.top();cal.pop();
                opr.pop();
                num=0;
            }
            
            
        }
        
        res+=num*sign;
        
        return res;
        
        
        
    }
};