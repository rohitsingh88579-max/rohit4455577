class Solution 
{
    public int dayOfYear(String date) 
    {
       int ar[]={31,28,31,30,31,30,31,31,30,31,30,31};
       int year=Integer.parseInt(date.substring(0,4));
       int month=Integer.parseInt(date.substring(5,7));
       int day=Integer.parseInt(date.substring(8));
       int num=0;
       if(leap(year))
       {
         ar[1]=29;
       }    
       for(int x=0;x<month-1;x++)
       {
         num+=ar[x];
       }
       return num+day;
    }
    public boolean leap(int x)
    {
        if(x%400==0)
        {
            return true;
        }
        if(x%100==0)
        {
            return false;
        }
        if(x%4==0)
        {
            return true;
        }
        return false;
    }
}