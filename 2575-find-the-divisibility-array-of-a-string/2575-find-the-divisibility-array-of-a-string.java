class Solution {
    public int[] divisibilityArray(String word, int m) {
        long rem=0;
        int[] res=new int[word.length()];
        for(int i=0;i<word.length();i++){
            rem=(rem*10+(word.charAt(i)-'0'))%m;
            if(rem==0)res[i]=1;
            else res[i]=0;
        }
        return res;
    }
}