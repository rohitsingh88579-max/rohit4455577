class Solution 
{
    public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int start=0;
        int end=n-1;

        int l=0;
        int r=0;
        int total=0;

        while(start<end)
        {
            l=max(l,height[start]);
            r=max(r,height[end]);
            if(l<r)
            {
                total+=l-height[start];
                start++;
            }
            else
            {
                total+=r-height[end];
                end--;
            }
        }    
        return total;
    }
};