class Solution 
{
    public:
    int smallestIndex(vector<int>& nums) 
    {
        for(int x=0;x<nums.size();x++) 
        {
            int sum=0;
            int temp=nums[x];
            while(temp!=0)
            {
                int d=temp%10;
                sum+=d;
                temp/=10;
            }
            if(sum==x)
            {
                return x;
            }
        }   
        return -1;
    }
};