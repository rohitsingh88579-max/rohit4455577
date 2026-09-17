class Solution 
{
    public:
    int findValueOfPartition(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int n=nums.size();
        for(int x=1;x<n;x++)
        {
           int diff=abs(nums[x-1]-nums[x]);
           mini=min(mini,diff);
        }
        return mini;

    }
};