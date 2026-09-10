class Solution 
{
    public int hIndex(int[] ar) 
    {
       int n=ar.length;
       int c=0;
       int l=0;
       int r=n-1;
       while(l<=r)
       {
          int mid=l+(r-l)/2;
          if(ar[mid]>=n-mid)
          {
            c=n-mid;
            r=mid-1;
          }
          else
          {
            l=mid+1;
          }
       }
       return c;
    }
}