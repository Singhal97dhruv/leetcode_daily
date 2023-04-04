class Solution {
public:
    int partitionString(string s) {
        // unordered_map<char,int>map;
        int arr[26]={};
        
        int cnt=0,lastIdx=0;
       
        for(int i=0;i<s.size();i++){
            if(arr[s[i]-'a']>=lastIdx){
                cnt++;
                lastIdx=i+1;
            }
            arr[s[i]-'a']=i+1;
        }
        
        
        return cnt;
    }
};