class Solution 
{
    public int maximumCount(int[] nums) 
    {
        int cp=0,cn=0;
        for(int x=0;x<=nums.length-1;x++)
        {
            if(nums[x]<0)
            {
                cn++;
            }
            else if(nums[x]>0)
            {
                cp++;
            }
        }
        return Math.max(cp,cn);
    }
}