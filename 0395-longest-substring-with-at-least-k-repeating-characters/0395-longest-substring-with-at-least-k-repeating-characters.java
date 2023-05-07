class Solution {
    public int longestSubstring(String s, int k) {
        if(s==null || k>s.length())return 0;
        
        int n=s.length();
        
        char []chars=new char[26];
        
        for(char c:s.toCharArray())chars[c-'a']++;
        
        int idx=0;
        
        while(idx<n && chars[s.charAt(idx)-'a']>=k )idx++;
        
        if(idx==n)return n;
        
        int leftSubarray=longestSubstring(s.substring(0,idx),k);
        
        while(idx<n && chars[s.charAt(idx)-'a']<k )idx++;
        
        int rightSubarray=longestSubstring(s.substring(idx),k);
        
        return Math.max(leftSubarray,rightSubarray);
        
    }
}