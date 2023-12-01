class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
     
        string w1="",w2="";
        for(int i=0;i<word1.size();i++){
            for(char c:word1[i]){
                w1+=c;
            }
        }
        for(int i=0;i<word2.size();i++){
            for(char c:word2[i]){
                w2+=c;
            }
        }
        return w1==w2?true:false;
    }
};