class Solution 
{
    public int maximumValue(String[] strs) 
    {
       int ans=0;
       for(String s:strs)
       {
         ans=Math.max(ans,height(s));
       }    
       return ans;
    }
    public int height(String s)
    {
        s=s.toLowerCase();
        for(int x=0;x<s.length();x++)
        {
            if(s.charAt(x)>='a' && s.charAt(x)<='z')
            {
                return s.length();
            }
        }
        return Integer.parseInt(s);
    }
}