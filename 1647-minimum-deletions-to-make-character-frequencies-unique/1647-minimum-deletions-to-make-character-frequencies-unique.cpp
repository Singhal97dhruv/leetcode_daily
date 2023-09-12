class Solution {
public:
    int minDeletions(string s) {
        
        int res=0;
        vector<int>ch(26,0);
        for(char c:s){
            ch[c-'a']++;
        }
        int occ=0;
        sort(ch.begin(),ch.end());
        for(int i=24;i>=0;i--){
            if(ch[i]==0)break;
            if(ch[i]>=ch[i+1]){
                int prev=ch[i];
                ch[i]=max(0,ch[i+1]-1);
                res+=prev-ch[i];
            }
        }
        return res;
        
    }
};