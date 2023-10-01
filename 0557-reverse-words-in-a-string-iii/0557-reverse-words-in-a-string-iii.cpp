class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans="",word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            ans+=word+" ";
        }
        return ans.substr(0,ans.size()-1);
    }
};