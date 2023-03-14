class Solution {
    public boolean isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return true;
        return false;
    }
    public int vowelStrings(String[] words, int left, int right) {
        int res=0;
        for(int i=left;i<=right;i++){
            res+=isVowel(words[i].charAt(0))&&isVowel(words[i].charAt(words[i].length()-1))?1:0;
        }
        return res;
    }
}