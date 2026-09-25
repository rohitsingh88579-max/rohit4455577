class Solution 
{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       vector<vector<int>>ans;
       for(int x=0;x<n;x++)
       {
         if(x>0 && nums[x]==nums[x-1])
         {
            continue;
         }
         for(int y=x+1;y<n;y++)
         {
            if(y!=x+1 && nums[y]==nums[y-1])
            {
                continue;
            }
            int left=y+1;
            int right=n-1;
            while(left<right)
            {
                long long sum=nums[x];
                sum+=nums[y];
                sum+=nums[left];
                sum+=nums[right];
                if(sum==target)
                {
                    vector<int>temp={nums[x],nums[y],nums[left],nums[right]};
                    ans.push_back(temp);
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                    {
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1])
                    {
                        right--;
                    }
                }
                else if(sum<target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
         }
       }    
       return ans;
    }
};