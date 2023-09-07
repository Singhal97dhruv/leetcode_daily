class Solution {
public:
    
    
    string invert(string s){
        for(char &c:s){
            c=c=='0'?'1':'0';
        }
        return s;
    }
    
    char findKthBit(int n, int k) {
    
        string s="0";
        
        for(int i=2;i<=n;i++){
            // s+="1";
            string temp=invert(s);
            reverse(temp.begin(),temp.end());
            s+="1";
            s+=temp;
            
        }
        cout<<s<<" ";
        return (char)s[k-1];
        
    }
};