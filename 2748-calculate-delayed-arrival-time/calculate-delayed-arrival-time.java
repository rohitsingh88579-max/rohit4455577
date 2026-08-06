class Solution 
{
    public int findDelayedArrivalTime(int arrivalTime, int delayedTime) 
    {
       int sum=arrivalTime+delayedTime;
       if(sum<=23)
       {
         return sum;
       }
       else
       {
         return sum%24;
       }
    }
}