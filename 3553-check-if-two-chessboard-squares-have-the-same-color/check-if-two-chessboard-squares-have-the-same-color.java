class Solution 
{
    public boolean checkTwoChessboards(String coordinate1, String coordinate2) 
    {
        int m=coordinate1.charAt(0)-'a'+coordinate1.charAt(1)-'a';
        int n=coordinate2.charAt(0)-'a'+coordinate2.charAt(1)-'a';
        return m%2==n%2;
    }
}