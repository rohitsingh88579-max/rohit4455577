class Solution 
{
    public int missingNumber(int[] ar) 
    {
        int n=ar.length;
        int ans=n;
        for(int x=0;x<n;x++)
        {
            ans^=x;
            ans^=ar[x];
        }
        return ans;
    }
}