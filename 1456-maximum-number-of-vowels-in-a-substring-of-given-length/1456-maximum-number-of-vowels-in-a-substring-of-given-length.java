class Solution {
    public boolean isVowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    public int maxVowels(String s, int k) {
       int i=0,j=0; 
        int cntVowel=0;
        for(;j<k;j++)if(isVowel(s.charAt(j)))cntVowel++;
        int windowVowel=cntVowel;
        for(;j<s.length();j++,i++){
            if(isVowel(s.charAt(j)) && isVowel(s.charAt(i))==false){
                windowVowel++;
                cntVowel=Math.max(windowVowel,cntVowel);
            }
            else if(isVowel(s.charAt(j))==false && isVowel(s.charAt(i)))windowVowel--;
        }
        return cntVowel;
    }
}