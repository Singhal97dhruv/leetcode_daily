class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0,n=chars.size();
        while(i<n){
            int ans=1;
            while(i<n-1 && chars[i]==chars[i+1]){
                i++;
                ans++;
            }
            chars[j++]=chars[i++];
            if(ans>1){
                string s=to_string(ans);
                for(char c:s){
                    chars[j++]=c;
                }
            }
        }
        return j;
    }
};