class Solution 
{
    public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
       vector<vector<int>> ans;
       sort(nums.begin(),nums.end());
       for(int x=0;x<nums.size();x++)
       {
         if(x>0 && nums[x]==nums[x-1])
         {
              continue;
         }
         int left=x+1;
         int right=nums.size()-1;
         while(left<right)
         {
            int total=nums[x]+nums[left]+nums[right];
            if(total>0)
            {
                right--;
            }  
            else if(total<0)
            {
                left++;
            }
            else
            {
                ans.push_back({nums[x],nums[left],nums[right]});
                left++;
                right--;
                 while(left<right && nums[left]==nums[left-1])
                 {
                   left++;
                }
            }
         }
       }
       return ans;
    }
};