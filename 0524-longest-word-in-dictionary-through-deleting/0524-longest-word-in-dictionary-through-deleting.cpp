class Solution {
public:
    
    string LongestMatching(string s1,string s2,int i=0,int j=0){
        string res;
        for(int i=0,j=0;i<s1.size() && j<s2.size();i++){
            if(s1[i]==s2[j]){
                res+=s1[i];
                j++;
            }
        }
        return res.size()==s2.size()?res:"";
    }
    
    string findLongestWord(string s, vector<string>& dictionary) {
        
        string ans;
        sort(dictionary.begin(),dictionary.end());
        for(int i=dictionary.size()-1;i>=0;i--){
            
            string temp=LongestMatching(s,dictionary[i]);
            if(temp.size()>=ans.size())ans=temp;
        }
        return ans;
        
    }
};