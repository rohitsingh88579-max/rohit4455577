class Solution
 {
    public void sortColors(int[] nums)
    {
        int n=nums.length;
         for(int x=0;x<n-1;x++)
         {
            for(int y=0;y<n-x-1;y++)
            {
                if(nums[y]>nums[y+1])
                {
                    int temp=nums[y];
                    nums[y]=nums[y+1];
                    nums[y+1]=temp;
                }
            }
         }
    }
}