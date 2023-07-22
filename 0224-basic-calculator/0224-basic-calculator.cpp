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
        
     long long res=0,num=0,sign=1;
        stack<long long>oprStk,numStk;
        for(char c:s){
            if(c>='0' && c<='9'){
                num=num*10 + c-'0';
            }
            else if(c=='+'){
                res+=num*sign;
                sign=1;
                num=0;
            }
            else if(c=='-'){
                res+=num*sign;
                sign=-1;
                num=0;
            }
            else if(c=='('){
                oprStk.push(sign);
                numStk.push(res);
                sign=1;res=0;
            }
            else if(c==')'){
                res+=sign*num;
                num=0;
                res= res*oprStk.top()+numStk.top();
                oprStk.pop();
                numStk.pop();
            }
        }
        res+=num*sign;
        return res;
    }
};