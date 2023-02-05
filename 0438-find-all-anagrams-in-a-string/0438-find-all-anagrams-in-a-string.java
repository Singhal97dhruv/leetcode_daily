class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int[] s1=new int[26];
        List<Integer> l = new ArrayList<>();
        for(int i=0;i<p.length();i++){
            s1[p.charAt(i)-'a']++;
        }
        int[] s2=new int[26];
        int i=0,j=0,n=p.length();
        for(;j<s.length();j++){
            s2[s.charAt(j)-'a']++;
            if(j>=n){
                s2[s.charAt(j-n)-'a']--;i++;
            }
            if(Arrays.equals(s1,s2))l.add(i);
        }
        return l;
    }
}