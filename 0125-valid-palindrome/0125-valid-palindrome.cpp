class Solution {
public:
    bool isPalindrome(string s) {
        // string str="";
        // for(char c:s){
        //     if((c>=97 && c<=122) ||(c>=48 && c<=57))str+=c;
        //     else if(c>=65 && c<=90)str+=tolower(c);
        // }
        // int n=str.size();
        // // if(n<3)return true;
        // for(int i=0;i<n/2;i++){
        //     if(str[i]!=str[n-i-1])return false;
        // }
        // return true;
        
//         int i=0,j=s.size()-1;
        
//        while(i<j){
//            while(i<j && !isalnum(s[i]))i++;
//            if(i==j)break;
//            while(i<j && !isalnum(s[j]))j--;
//            if(i==j)break;
//            char sI=isalpha(s[i]) ? tolower(s[i]) : s[i];
//            char sJ=isalpha(s[j]) ? tolower(s[j]) : s[j];
//            if(sI==sJ)i++,j--;
//            else return false;
           
           
           
           
//        }
//         return true;
        
        
//         int i=0,j=s.size()-1;
//         while(i<j){
//             if(!isalnum(s[i]))i++;
//             else if(!isalnum(s[j]))j--;
           
//             else if(tolower(s[i])==tolower(s[j]))i++,j--;
//             else return false;
//         }
//         return true;
        
        
        int i=0,j=s.size()-1;
        while(i<j){
            if(!isalnum(s[i]))i++;
            else if(!isalnum(s[j]))j--;
            
            else if(tolower(s[i])==tolower(s[j]))i++,j--;
            else return false;
        }
        return true;
        
    }
};