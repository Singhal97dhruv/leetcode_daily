class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        for(i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0)break;
        }
        
        return i==-1?"":num.substr(0,i+1);
        
    }
};