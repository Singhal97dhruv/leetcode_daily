class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        
        long long cnt1=0,cnt2=0,res=0;
        
        for(char t:text){
            if(t==pattern[1]){
                res+=cnt1,cnt2++;
            }
            if(t==pattern[0])cnt1++;
        }
        return res + max(cnt1,cnt2);
    }
};