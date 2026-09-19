class Solution 
{
    public int removeElement(int[] nums, int val) 
    {
        int n=nums.length;
        int index=0;
        for(int x=0;x<n;x++)
        {
            if(nums[x]!=val)
            {
                nums[index]=nums[x];
                index++;
            }
        }    
        return index;
    }
}