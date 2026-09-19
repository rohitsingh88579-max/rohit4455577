class Solution 
{
    public int findTheWinner(int n, int k) 
    {
        return fun(n,k)+1;
    }
    public int fun(int n,int k)
    {
        if(n==1)
        {
            return 0;
        }
        return  (fun(n-1,k)+k)%n;
    }
}