class Solution 
{
    public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n=nums.size();
        
        for(int x=0;x<n;x++)
        {
            nums[x]=pow(nums[x],2);
        }    
        sort(nums.begin(),nums.end());
        return nums;
    }
};