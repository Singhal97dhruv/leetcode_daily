class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_set<string>set(words.begin(),words.end());
        sort(words.begin(),words.end());
        string ans;
        for(int i=words.size()-1;i>=0;i--)
        {
            string word=words[i];
            string w;
            int j;
            for(j=0;j<word.size();j++){
                w+=word[j];
                if(set.find(w)==set.end())break;
            }
            if(j==word.size() && j>=ans.size()){
                
                ans=word;
            }
        }
        
        return ans;
        
    }
};