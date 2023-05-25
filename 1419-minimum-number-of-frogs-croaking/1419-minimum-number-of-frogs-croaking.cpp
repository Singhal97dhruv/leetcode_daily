class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int ptr=0,ans=0;
        int c,r,o,a,k;
        c=r=o=a=k=0;
        for(char d:croakOfFrogs){
            
            switch(d){
                case 'c':
                    ptr++;
                    c++;
                    break;
                case 'r':
                    r++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'a':
                    a++;
                    break;
                case 'k':
                    ptr--;
                    k++;
                    break;
                    
            }
            if(c<r || r<o || o<a || a<k)return -1;
            ans=max(ans,ptr);
        }
        if(ptr==0 && c==r && c==o && o==a && a==k)return ans;
        return -1;
        
        
        
        
    }
};