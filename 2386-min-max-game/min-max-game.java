class Solution 
{
    public int minMaxGame(int[] nums) 
    {
       int n=nums.length;
       while(n>1)
       {
        n/=2;
        for(int x=0;x<n;x++)
        {
            if(x%2==0)
            {
                nums[x]=Math.min(nums[2*x],nums[2*x+1]);
            }
            else
            {
                nums[x]=Math.max(nums[2*x],nums[2*x+1]);
            }
        }
       }   
       return nums[0];
    }
}