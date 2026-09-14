class Solution 
{
    public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n=nums.size();
        int sub=1<<n;
        vector<vector<int>>ans;
        for(int x=0;x<sub;x++)
        {
            vector<int>total;
            for(int y=0;y<n;y++)
            {
                if(x & (1<<y))
                {
                    total.push_back(nums[y]);
                }
            }
            ans.push_back(total);
        }
        return ans;
    }
};