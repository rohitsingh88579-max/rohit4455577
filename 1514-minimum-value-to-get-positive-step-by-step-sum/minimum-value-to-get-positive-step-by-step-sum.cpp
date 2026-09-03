class Solution 
{
    public:
    bool step_sum(vector<int>&num,int i)
    {
        int n=num.size();
        for(int x=0;x<n;x++)
        {
            i+=num[x];
            if(i<1)
            {
                return false;
            }
        }
        return true;
    }
    int minStartValue(vector<int>& nums) 
    {
       int n=nums.size();
       int low=1;
       int high=10001;
       int count=1;
       while(low<=high)
       {
         int mid=(low+high)/2;
         if(step_sum(nums,mid))
         {
            count=mid;
            high=mid-1;
         }
         else
         {
            low=mid+1;
         }
       }
       return count;
    }
};