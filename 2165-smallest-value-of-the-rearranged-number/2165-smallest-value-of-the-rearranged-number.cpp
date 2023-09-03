class Solution {
public:
    long long smallestNumber(long long num) {
        
        if(num<0){
            string s=to_string(-num);
            sort(s.begin(),s.end(),greater<>());
            return -stoll(s);
        }
        else if(num==0)return 0;
        
        string s=to_string(num);
        sort(s.begin(),s.end());
        int i=0;
        while(i<s.size() && s[i]=='0')i++;
        swap(s[0],s[i]);
        return stoll(s);
        
        
    }
};