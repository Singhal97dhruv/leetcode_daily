class Solution {
public:
    int strStr(string haystack, string needle) {
        char start;
        if(needle.size()){
            start=needle[0];
        }
        else return 0;
        int idx=-1;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==start){
                int count=0,j,k=0;
                for(j=i;j<haystack.size();j++){
                    if(haystack[j]==needle[k])count++;
                    else break;k++;
                }
                if(count==needle.size())return i;
                // i=j-1;
            }
        }
        return -1;
    }
};