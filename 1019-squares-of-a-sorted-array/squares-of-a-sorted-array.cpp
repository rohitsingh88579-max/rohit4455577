class Solution 
{
    public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n=nums.size();
        
        for(int x=0;x<n;x++)
        {
            nums[x]*=nums[x];
        }    
        sort(nums.begin(),nums.end());
        return nums;
    }
};