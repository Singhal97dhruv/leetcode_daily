class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
//         int ptr=0,ans=0;
//         int c,r,o,a,k;
//         c=r=o=a=k=0;
//         for(char d:croakOfFrogs){
            
//             switch(d){
//                 case 'c':
//                     ptr++;
//                     c++;
//                     break;
//                 case 'r':
//                     r++;
//                     break;
//                 case 'o':
//                     o++;
//                     break;
//                 case 'a':
//                     a++;
//                     break;
//                 case 'k':
//                     ptr--;
//                     k++;
//                     break;
                    
//             }
//             if(c<r || r<o || o<a || a<k)return -1;
//             ans=max(ans,ptr);
//         }
//         if(ptr==0 && c==r && c==o && o==a && a==k)return ans;
//         return -1;
        
        int arr[5]={0};
        int frog=0,total=0;
        for(char ch:croakOfFrogs){
            
            int n=string("croak").find(ch);
            
            arr[n]++;
            if(n==0){
                total=max(total,++frog);
                
            }
            else if(--arr[n-1]<0)return -1;
            else if(n==4)frog--;
            
        }
        return frog==0?total:-1;
        
        
        
        
    }
};