class Solution {
public:
    string multiply(string num1, string num2) {
        
        string res(num1.size()+num2.size(),'0');
        for(int i=num1.size()-1;i>=0;i--){
         int n1=num1[i]-'0',carry=0;
            for(int j=num2.size()-1;j>=0;j--){
                
                int r=(num1[i]-'0')*(num2[j]-'0')+(res[i+j+1]-'0');
                // int r=n1*(num2[j]-'0')+(res[i+j+1]-'0');
                // carry=r/10;r=r%10;
                res[i+j+1]=(r%10)+'0';
                res[i+j]+=r/10;
            }
            
        }
        for(int i=0;i<res.size();i++)if(res[i]!='0')return res.substr(i);
        return "0";
    }
};