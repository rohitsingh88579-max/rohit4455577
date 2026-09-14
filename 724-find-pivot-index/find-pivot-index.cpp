class Solution 
{
    public:
    int pivotIndex(vector<int>& nums) 
    {
       int right=0,left=0;
       int n=nums.size();
       for(int x:nums)
       {
         right+=x;
       }    
       for(int x=0;x<n;x++)
       {
          right-=nums[x];
          if(left==right)
          {
            return x;
          }
          left+=nums[x];
       }
       return -1;
    }
};
