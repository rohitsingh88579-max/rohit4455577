class Solution 
{
    public:
    vector<int> buildArray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>temp(nums.size());
        for(int x=0;x<n;x++)
        {
            temp[x]=nums[nums[x]];
        }    
        return temp;
    }
};