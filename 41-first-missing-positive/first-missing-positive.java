class Solution 
{
    public int firstMissingPositive(int[] nums) 
    {
        int n=nums.length;
        //Cleaning
        for(int x=0;x<n;x++)
        {
            if(nums[x]<=0 ||nums[x]>n)
            {
               nums[x]=n+1;  
            }
        }    
        //Negative
        for(int x=0;x<n;x++)
        {
            int num=Math.abs(nums[x]);
            if(num>n)
            {
                continue;
            }
            int index=num-1;
            if(nums[index]>0)
            {
                nums[index]=-nums[index];
            }
        }
        //Answer
        for(int x=0;x<n;x++)
        {
            if(nums[x]>0)
            {
                return x+1;
            }
        }
        return n+1;
    }
}

