class Solution {
public:
    
    bool isPossible(string s,unordered_set<string>&set){
        
        for(int i=0;i<s.size();i++){
            
            string temp;
            for(int j=0;j<s.size();j++){
                if(i==j)continue;
                temp+=s[j];
            }
            if(set.find(temp)!=set.end())return true;
        }
        return false;
    }
    
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        
        unordered_set<string>set;
        int cnt=0;
        for(string s:startWords){
            sort(s.begin(),s.end());
            set.insert(s);
        }
        
        for(string s:targetWords){
            sort(s.begin(),s.end());
            if(isPossible(s,set)){
                cnt++;
            }
        }
        return cnt;
    }
};