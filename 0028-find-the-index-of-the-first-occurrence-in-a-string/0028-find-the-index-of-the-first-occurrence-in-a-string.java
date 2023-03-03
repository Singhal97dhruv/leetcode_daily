class Solution {
    public int strStr(String haystack, String needle) {
         int n = haystack.length();
        int m = needle.length();
        if (m == 0) return 0;
        int[] pi = new int[m];
        pi[0] = 0;
        int j = 0;
        for (int i = 1; i < m; i++) {
            while (j > 0 && needle.charAt(j) != needle.charAt(i)) {
                j = pi[j - 1];
            }
            if (needle.charAt(j) == needle.charAt(i)) {
                j++;
            }
            pi[i] = j;
        }
        j = 0;
        for (int i = 0; i < n; i++) {
            while (j > 0 && needle.charAt(j) != haystack.charAt(i)) {
                j = pi[j - 1];
            }
            if (needle.charAt(j) == haystack.charAt(i)) {
                j++;
            }
            if (j == m) {
                return i - m + 1;
            }
        }
        return -1;
    }
}