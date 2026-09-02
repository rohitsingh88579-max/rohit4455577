class Solution 
{
    public:
    bool uniformArray(vector<int>& nums1) 
    {
       int n=nums1.size();
       vector<int>nums2;
       vector<int>nums3;
       for(int x=0;x<n;x++)    
       {
          if(nums1[x]%2==0)
          {
             nums2=nums1;
             return true;
          }
          else if(nums1[x]%2!=0)
          {
            nums3=nums1;
            return true;
          }
       }
       return false;
    }
};