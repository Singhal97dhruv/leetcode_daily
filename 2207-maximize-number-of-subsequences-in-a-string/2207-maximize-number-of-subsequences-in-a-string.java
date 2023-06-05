class Solution {
    public long maximumSubsequenceCount(String text, String pattern) {
         long cnt1=0,cnt2=0,res=0;
        
        for(char t:text.toCharArray()){
            if(t==pattern.charAt(1)){
                res+=cnt1;cnt2++;
            }
            if(t==pattern.charAt(0))cnt1++;
        }
        return res + Math.max(cnt1,cnt2);
    }
}