class Solution {
public:
    bool isvowel(char v) {
    return (0x208222>>(v&0x1f))&1;
}
    int vowelStrings(vector<string>& words, int left, int right) {
        int res=0;
        for(int i=left;i<=right;i++){
            res+=isvowel(words[i][0])&&isvowel(words[i][words[i].size()-1]);
        }
        return res;
    }
};