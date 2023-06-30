class Solution {
public:
    
    string find_palindrome(string s,int i,int j){
        while(i>=0 && j<s.size() && s[i]==s[j])i--,j++;
        return s.substr(i+1,j-i-1);
    }
    
    
    string longestPalindrome(string s) {
//         int len = s.size();
//     int dp[len][len];
//     memset(dp,0,sizeof(dp));
//     int end=1;
//     int start=0;
	
//     for(int i=0;i<len;i++)
//     {
//         dp[i][i] = 1;
//     }
//     for(int i=0;i<len-1;i++)
//     {
//         if(s[i]==s[i+1])
//         { dp[i][i+1]=1;start=i;end=2;}
//     }
    
//     for(int j=2;j<len;j++)
//     {
//         for(int i=0;i< len-j;i++)
//         {  
//             int left=i; //start point
//             int right = i+j;  //ending point
            
//             if(dp[left+1][right-1]==1 && s[left]==s[right]) 
//             {
//                 dp[left][right]=1; start=i; end=j+1; 
//             }        
//         }
//     }
//    return s.substr(start, end);
        string res="";
        for(int i=0;i<s.size();i++){

            string res1=find_palindrome(s,i,i);
            
            if(res1.size()>res.size())res=res1;
            
            string res2=find_palindrome(s,i,i+1);
     
            if(res2.size()>res.size())res=res2;

        }
        return res;
        
        
        
        
    }
};