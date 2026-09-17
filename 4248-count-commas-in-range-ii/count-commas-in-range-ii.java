class Solution 
{
    public long countCommas(long n) 
    {
       long result=0;
       long p=1000;
       while(p<=n)
       {
         result+=n-p+1;
         p=p*1000;
       }        
       return result;
    }
}