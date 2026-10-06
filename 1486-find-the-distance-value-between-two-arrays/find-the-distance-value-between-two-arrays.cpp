class Solution 
{
    public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {
       int m=arr1.size();
       int n=arr2.size();
       int ans=0;

       for(int x=0;x<m;x++)
       {
        bool valid=true;
        for(int y=0;y<n;y++)
        {
            if(abs(arr1[x]-arr2[y])<=d)
            {
                 valid=false;
                 break;
            }
        }
        if(valid)
        {
            ans++;
        }
       }    
       return ans;
    }
};