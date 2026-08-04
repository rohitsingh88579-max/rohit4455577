class Solution 
{
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ar;
        int start=nums[0],end=nums[n-1];
        int x=0;
        while(start<=end)
        {
            if(start==nums[x])
            {
                x++;
            }
            else
            {
                ar.push_back(start);
            }
            start++;
        }
        return ar;
    }
};