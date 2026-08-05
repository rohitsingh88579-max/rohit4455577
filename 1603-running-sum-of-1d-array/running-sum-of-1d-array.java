class Solution 
{
    public int[] runningSum(int[] nums) 
    {
       int n=nums.length;
       for(int x=1;x<n;x++)
       {
          nums[x]=nums[x]+nums[x-1];
       }    
       return nums;
    }
}