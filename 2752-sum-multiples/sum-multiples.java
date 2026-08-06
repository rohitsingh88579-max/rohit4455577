class Solution 
{
    public int sumOfMultiples(int n) 
    {
        int s1=0,s2=0;
        for(int x=1;x<=n;x++)
        {
            if(x%3==0 || x%5==0 || x%7==0)
            {
                s1+=x;
            }
        }
        return s1+s2;
    }
}