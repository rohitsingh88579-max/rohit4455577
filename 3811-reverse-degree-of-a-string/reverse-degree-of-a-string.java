class Solution 
{
    public int reverseDegree(String s) 
    {
        int n=s.length();
        int ans=0;
        for(int x=0;x<n;x++)
        {
            int rev=26-(s.charAt(x)-'a');
            ans+=rev*(x+1);
        }
        return ans;
    }
}