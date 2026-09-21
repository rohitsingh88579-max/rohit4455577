class Solution 
{
    public boolean checkTwoChessboards(String coordinate1, String coordinate2) 
    {
        int m=coordinate1.charAt(0)-'a'+coordinate1.charAt(1)-'1';
        int n=coordinate2.charAt(0)-'a'+coordinate2.charAt(1)-'1';
        if(m%2==n%2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}