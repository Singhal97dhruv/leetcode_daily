class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ones=0,ans=0;
        for(char c:s){
            if(c=='1'){
                ones++;
            }
            else
                ans=min(++ans,ones);
        }
        return ans;
    }
};