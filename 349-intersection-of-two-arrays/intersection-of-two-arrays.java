class Solution 
{
    public int[] intersection(int[] ar1, int[] ar2) 
    {
           int  s1=ar1.length;
           int  s2=ar2.length;
           int ar3[]=new int[Math.min(s1,s2)];
           int count=0;
           for(int x=0;x<s1;x++)
           {
            boolean found=false;
            for(int y=0;y<count;y++)
            {
               if(ar1[x]==ar3[y])
               {
                found =true;
                break;
               }
            }
               if(found)
               {
                continue;
               }
                 for(int z=0;z<s2;z++)
                 {
                      if(ar1[x]==ar2[z])
                      {
                         ar3[count]=ar1[x];
                         count++;
                         break;
                      }
                 }
            }
           
        return Arrays.copyOf(ar3,count);
    
    }
}
