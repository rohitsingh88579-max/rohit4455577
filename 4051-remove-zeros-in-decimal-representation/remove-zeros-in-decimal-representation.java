class Solution 
{
    public long removeZeros(long n) 
    {
        String str="";
        String s=Long.toString(n);
        for(int x=0;x<s.length();x++)
        {
            if(s.charAt(x)!='0')
            {
               str+=s.charAt(x);
            }
        }
        return Long.parseLong(str);
    }
}