class Solution 
{
    public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool>ans;
        int maxi=0;
        for(int x:candies)
        {
            maxi=max(maxi,x);
        }    
        for(int x:candies)
        {
            if(extraCandies+x>=maxi)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};