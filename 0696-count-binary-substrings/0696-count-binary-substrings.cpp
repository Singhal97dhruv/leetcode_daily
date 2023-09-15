class Solution {
public:
    int countBinarySubstrings(string s) {
        
        int n=s.size();
        int pre=0,cur=1,res=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])cur++;
            else{
                res+=min(pre,cur);
                pre=cur;
                cur=1;
            }
        }
        return res+min(cur,pre);
        
    }
};