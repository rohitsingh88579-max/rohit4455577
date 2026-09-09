class Solution
{
    public long countCommas(long n) 
    {
        long p=1000,result=0;
        while(p<=n)
        {
            result+=n-p+1;
            p=p*1000;
        }    
        return result;
    }
}