class Solution {
    public boolean checkInclusion(String s1, String s2) {
        
        int[] cnt=new int[26];
        for(char c:s1.toCharArray()){
            cnt[c-'a']++;
        }
        int[]temp=new int[26];int n=s1.length();
        for(int i=0;i<s2.length();i++){
            temp[s2.charAt(i)-'a']++;
            if(i>=n){
                temp[s2.charAt(i-n)-'a']--;
            }
            if(Arrays.equals(cnt,temp))return true;
        }
        
        return false;
    }
}