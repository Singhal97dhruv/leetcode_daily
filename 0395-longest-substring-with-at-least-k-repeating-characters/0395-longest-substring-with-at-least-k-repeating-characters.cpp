class Solution {
public:
    int longestSubstring(string s, int k) {
        
        if(s.size()==0 || k>s.size())return 0;
        
        unordered_map<char,int>map;
        for(char c:s)map[c]++;
        int i=0;
        
        while(i<s.size() && map[s[i]]>=k)i++;
 
        
        if(i==s.size())return i;
        
        int leftSubarray=longestSubstring(s.substr(0,i),k);
               
        while(i<s.size() && map[s[i]]<k)i++;
        
        int rightSubarray=longestSubstring(s.substr(i),k);
        
        return max(leftSubarray,rightSubarray);

        
    }
};