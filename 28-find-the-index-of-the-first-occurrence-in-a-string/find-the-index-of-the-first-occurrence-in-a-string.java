class Solution {
    public int strStr(String haystack, String needle) {
        int n = haystack.length();
        for (int x = 0; x <=n - needle.length(); x++) {
            char ch = haystack.charAt(x);
            if (haystack.substring(x, x + needle.length()).equals(needle)) {
                return x;
            }
        }
        return -01;
    }
}