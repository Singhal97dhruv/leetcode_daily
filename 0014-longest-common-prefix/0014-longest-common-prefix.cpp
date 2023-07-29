class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=INT_MAX;
        for(string s:strs){
            int sz=s.size();
            n=min(n,sz);
        }
        string res="";
        for(int i=0;i<n;i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c)return res;
            }
            res+=c;
        }
        return res;
    }
};