class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       vector<string>ans;
        unordered_map<string,int>map;
        string temp;
        stringstream ss1(s1),ss2(s2);
        while(ss1>>temp){
            map[temp]++;
        }
        
        while(ss2>>temp){
            map[temp]++;
        }
        
        
        for(auto [key,val]:map){
            if(val==1)ans.push_back(key);
        }
        return ans;
    }
};