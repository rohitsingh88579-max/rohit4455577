class Solution 
{
public:
    int subarraySum(vector<int>& ar, int k) 
    {
        int n=ar.size();
        int count=0;
        for(int x=0;x<n;x++)
        {
            int cur_sum=0;
            for(int y=x;y<n;y++)
            {
                cur_sum+=ar[y];
                if(cur_sum==k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};