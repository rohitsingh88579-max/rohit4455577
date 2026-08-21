class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int sum=0;
       for(int x=0;x<nums.size();x++)
       {
         sum+=nums[x];
       }    
       return sum%k;
    }
};