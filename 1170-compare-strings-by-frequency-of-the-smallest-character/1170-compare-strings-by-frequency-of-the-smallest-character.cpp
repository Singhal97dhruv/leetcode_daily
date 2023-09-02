class Solution {
public:
    
    
    int func(string s){
        
        vector<int>v(26,INT_MAX);
        for(char c:s){
            v[c-'a']==INT_MAX?v[c-'a']=1:v[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=INT_MAX)return v[i];
        }
        return 0;
    }
    
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        vector<int>vect(12,0);
        for(int i=0;i<words.size();i++){
            int len=func(words[i]);
            vect[len]++;
        }
        
        ////  Cummulative Frequency
        for(int i=9;i>=0;i--){
            vect[i]+=vect[i+1];
        }
        
        vector<int>ans;
        for(string s:queries){
            int len=func(s);
            ans.push_back(vect[len+1]);
            
        }
        
        return ans;
    }
};