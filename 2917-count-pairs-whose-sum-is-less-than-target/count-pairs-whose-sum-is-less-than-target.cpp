class Solution {
public:
    int countPairs(vector<int>& nums, int target) 
    {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int count=0;
       int low=0,high=n-1;
       while(low<high)
       {
        if(nums[low]+nums[high]<target)
        {
            count+=high-low;
            low++;
        }
        else
        {
            high--;
        }
       }   
       return count;
    }
};