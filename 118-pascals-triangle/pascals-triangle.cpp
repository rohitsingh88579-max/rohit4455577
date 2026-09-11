class Solution 
{
    public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>>pascal;
        for(int x=0;x<n;x++)
        {
            pascal.push_back(vector<int>(x+1));
            for(int y=0;y<=x;y++)
            {
                if(y==0||y==x)
                {
                    pascal[x][y]=1;
                }
                else
                pascal[x][y]=pascal[x-1][y-1]+pascal[x-1][y];
            }
        }
        return pascal;
    }
};