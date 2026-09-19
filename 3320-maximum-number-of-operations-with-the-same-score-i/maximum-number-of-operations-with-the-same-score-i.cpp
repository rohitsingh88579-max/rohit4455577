class Solution 
{
    public:
    int maxOperations(vector<int>& nums)
    {
       int sum=nums[0]+nums[1];
       int x=2;
       int count=1;
       while(x+1<nums.size())
       {
         if(nums[x]+nums[x+1]==sum)
        {
            count++;
            x+=2;
        }
        else
        {
            break;
        }
       }    
       return count;
    }
};