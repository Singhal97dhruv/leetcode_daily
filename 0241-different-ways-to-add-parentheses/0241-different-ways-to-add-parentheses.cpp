class Solution {
public:
    
    int combine(int x,int y,char opr){
        if(opr=='+')return x+y;
        else if(opr=='-')return x-y;
        return x*y;
    }
    
    vector<int> diffWaysToCompute(string expression) {
        bool isNum=true;
        vector<int>res;
        for(int i=0;i<expression.size();i++){
            
            if(expression[i]=='*'||expression[i]=='-'||expression[i]=='+'){
                isNum=false;
                
                vector<int>left=diffWaysToCompute(expression.substr(0,i));
                
                vector<int>right=diffWaysToCompute(expression.substr(i+1));
                
                for(int x:left){
                    for(int y:right){
                        res.push_back(combine(x,y,expression[i]));
                    }
                }
                
            }
            
        }
        if(isNum)res.push_back(stoi(expression));
        return res;
        
    }
};