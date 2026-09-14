class Solution 
{
    public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int left=0;
        int right=0;
        for(int x=0;x<nums.size();x++)
        {
            right+=nums[x];
        }    

        for(int x=0;x<nums.size();x++)
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