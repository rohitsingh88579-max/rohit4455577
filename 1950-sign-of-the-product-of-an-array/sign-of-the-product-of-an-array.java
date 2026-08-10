class Solution 
{
    public int arraySign(int[] ar) 
    {
        int sign=1;
        for(int x=0;x<ar.length;x++)
        {
            if(ar[x]==0)
            {
                sign=0;
            }
            else if(ar[x]<0)
            {
                sign=-sign;
            }
        }
        return sign;
    }
}