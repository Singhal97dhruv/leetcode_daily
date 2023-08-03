class Solution {
public:
    
    // int numDecodings(int pos,string s,vector<int>&mem){
    //     int n=s.size();
    //     if(mem[pos]>-1)return mem[pos];
    //     // if(pos==s.size())return 1;
    //     if(s[pos]=='0')return mem[pos]= 0;
    //     int res=numDecodings(pos+1,s,mem);
    //     if(pos<n-1 && (s[pos]=='1' ||(s[pos]=='2' && s[pos+1]<'7')) )res+=numDecodings(pos+2,s,mem);
    //     return mem[pos]= res;
    // }
    
    
//     int dp[101]={[0 ... 100]=0};
    
//     int decoding(int idx,string s){
//         if(idx>=s.size())return 1;
//         if(dp[idx]!=-1)return dp[idx];
//         if(s[idx]=='0')return 0;
        
//         int cnt=0;
//         if(s.size()-idx>=2){
//             if( s[idx]<'2' || (s[idx]=='2' && s[idx+1]<'7')){
//                 cnt+=decoding(idx+2,s);
//             }
//         }
//         cnt+=decoding(idx+1,s);
//         return dp[idx]= cnt;
//     }
    int dp[101]={[0 ... 100]=-1};
    int decode(int idx,string s){
        if(idx>=s.size())return 1;
        if(dp[idx]!=-1)return dp[idx];
        if(s[idx]=='0')return 0;
        int cnt=0;
        
        if(idx+1<s.size()){
            if(s[idx]<'2' || (s[idx]=='2' && s[idx+1]<='6')){
                cnt=decode(idx+2,s);   
            }
        }
        cnt+=decode(idx+1,s);
        return dp[idx]= cnt;
        
    }
    
    int numDecodings(string s) {
       //  vector<int>mem(s.size()+1,-1);
       //  mem[s.size()]=1;
       // return s.size()==0?0:numDecodings(0,s,mem);
        // return decoding(0,s);
        
//         int n=s.size();
//         dp[n]=1;
//         for(int i=n-1;i>=0;i--){
            
//             if(s[i]=='0')dp[i]=0;
//             else {
//                 dp[i]=dp[i+1];   
//                  if( i<n-1 && (s[i]<'2' ||(s[i]=='2' && s[i+1]<'7'))){
//                 dp[i]+=dp[i+2];
//                 }
//             }
           
//         }
//         return dp[0];
        
        return decode(0,s);
        
        
    }
};