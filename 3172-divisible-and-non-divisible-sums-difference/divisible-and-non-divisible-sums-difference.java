class Solution 
{
    public int differenceOfSums(int n, int m) 
    {
        int sum1=0,sum2=0;
        for(int x=1;x<=n;x++)
        {
            if(x%m==0)
            {
                sum2+=x;
            }
            else
            {
                sum1+=x;
            }
        }
        return sum1-sum2;
    }
}