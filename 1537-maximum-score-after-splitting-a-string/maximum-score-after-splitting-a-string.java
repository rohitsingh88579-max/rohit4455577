class Solution 
{
    public int maxScore(String s) 
    {
       int zero=0;
       int one=0;
       int max=0;
       int best=Integer.MIN_VALUE;
       char ch[]=s.toCharArray();
       for(char c:ch)
       {
        if(c=='1')
        {
            one++;
        }
       }
       for(int x=0;x<s.length()-1;x++)
       {
         if(s.charAt(x)=='0')
         {
            zero++;
         }
         else
         {
            max++;
         }
         int cur=zero+(one-max);
         best=Math.max(best,cur);
       }
       return best;
    }
}