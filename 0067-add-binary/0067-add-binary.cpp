class Solution {
public:
    string addBinary(string a, string b) {
        // int m=a.size()-1,n=b.size()-1,carry=0;
        // string res="";
        // while(m>=0 || n>=0){
        //     int sum=carry;
        //     if(m>=0)sum+=a[m]-'0';
        //     if(n>=0)sum+=b[n]-'0';
        //     m--,n--;
        //     // sum+=carry;
        //     if(sum>1)carry=1;
        //     else carry=0;
        //     res+=to_string(sum%2);
        // }
        // if(carry==1)res+=to_string(carry);
        // reverse(res.begin(),res.end());
        // return res;
        
        
        int m=a.size()-1,n=b.size()-1;
        string ans="";
        int carry=0;
        while(m>=0 || n>=0){
            int sum=carry;
            if(m>=0)sum+=a[m]-'0';
            if(n>=0)sum+=b[n]-'0';
            carry=sum>1?1:0;
            ans+=to_string(sum%2);
            m--;n--;
        }
        if(carry)ans+='1';
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};