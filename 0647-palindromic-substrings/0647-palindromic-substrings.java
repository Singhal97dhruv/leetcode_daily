class Solution {
    
    public int palindromes(String s,int i,int j){
        int n=s.length();
        int cnt=0;
        while(i>=0 && j<n && s.charAt(i)==s.charAt(j)){
                cnt++;
            i--;j++;
        }
        return cnt;
    }
    
    public int countSubstrings(String s) {
        int cnt=0;
        for(int i=0;i<s.length();i++){
            cnt+=palindromes(s,i,i);
            cnt+=palindromes(s,i,i+1);
        }
        return cnt;
    }
}