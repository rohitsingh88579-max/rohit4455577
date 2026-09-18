class Solution 
{
    public:
    vector<int> limitOccurrences(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<int>ans;
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            if(left<k||nums[left]!=nums[left-k])
            {
                ans.push_back(nums[left]);
            }
            left++;
        }    
        return ans;
    }
};