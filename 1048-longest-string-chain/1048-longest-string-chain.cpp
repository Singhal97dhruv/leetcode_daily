class Solution {
public:
    int longestStrChain(vector<string>& words) {
             sort(words.begin(), words.end(), [](const string &l, const string &r) { return l.size() < r.size(); });
        int res=1;
        unordered_map<string,int>map;
        for(string word:words){
            map[word]=1;
            for(int i=0;i<word.size();i++){
                string prev=word.substr(0,i)+word.substr(i+1);
                if(map.find(prev)!=map.end()){
                    map[word]=max(map[word],map[prev]+1);
                  res=max(map[word],res);  
                }
            }
        }
        
        return res;
    }
};