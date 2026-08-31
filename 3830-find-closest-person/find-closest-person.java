class Solution 
{
    public int findClosest(int x, int y, int z) 
    {
       int m=Math.abs(z-x);
       int n=Math.abs(z-y);    
       if(m==n)
       {
        return 0;
       }
       if(m>n)
       {
        return 2;
       }
       return 1;
    }
}