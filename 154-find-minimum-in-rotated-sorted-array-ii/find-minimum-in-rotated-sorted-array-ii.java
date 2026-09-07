class Solution 
{
    public int findMin(int[] ar) 
    {
        int min=ar[0];
        for(int x=0;x<ar.length;x++)
        {
           if(ar[x]<min)
           {
             min=ar[x];
           }
        }    
        return min;
    }
}