class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         vector<int>n(256,-1);
//         int maxlen=0;
//        int start=-1;
//         for(int i=0;i!=s.size();i++){
//             if(n[s[i]]>start){
//                 start=n[s[i]];
//             }
//             n[s[i]]=i;
//             maxlen=max(maxlen,i-start);
            
//         }
//         return maxlen;
        
        int i=0,j=0;
        int res=0;
        unordered_map<char,int>map;
        for(int j=0;j<s.size();j++){
            if(map[s[j]]==0){
                map[s[j]]++;
                
            }
            else{
                while(s[i]!=s[j]){
                    
                    map.erase(s[i]);
                    i++;
                }
                i++;
            }
            res=max(res,j-i+1);

        }
        return res;
        
        
    }
};