class Solution {
public:
    bool isSubsequence(string s, string t) {
// int j=0;        
//         for(char c: s){
//             int flag=0;
//         while(j!=t.size()){
//             if(c==t[j]){
//                 flag=1;
//                 j++;
//                 break;
//             }
//             j++;
//         }    
//             if(flag==0)return false;
            
            
//         }
//         return true;
        if(s=="" && t=="")return true;
        int i=0,j=0;
        while(j<t.size()){
            if(s[i]==t[j++])i++;
            if(i==s.size())return true;
        }
        return false;
        
    }
};