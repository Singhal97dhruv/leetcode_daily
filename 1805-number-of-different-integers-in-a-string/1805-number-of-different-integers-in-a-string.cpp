class Solution {
public:
    int numDifferentIntegers(string word) {
        
        int n=word.size();
        unordered_set<string>set;
       for(int i=0;i<n;){
           if(!isdigit(word[i])){
               i++;continue;
           }
           int j=0;
           string tmp="";
           while(i<n && isdigit(word[i]) ){
               tmp+=word[i++];
           }
           while(j<tmp.size() && tmp[j]=='0')j++;
           set.insert(tmp.substr(j));
           
       }
        return set.size();
    }
};