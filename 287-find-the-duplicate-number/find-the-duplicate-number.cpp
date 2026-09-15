class Solution 
{
    public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(n+1);
        for(int x=0;x<n;x++)
        {
            ans[nums[x]]++;
            if(ans[nums[x]]>1)
            {
                return nums[x];
            }
        }
        return n;
    }
};