class Solution 
{
    public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
       int m=mat.size();
       int n=mat[0].size();
       int lsum=0,rsum=0;
       for(int x=0;x<m;x++)
       {
         for(int y=0;y<n;y++)
         {
            if(x==y)
            {
                lsum+=mat[x][y];
            }
            else if(x+y==n-1)
            {
                rsum+=mat[x][y];
            }
         }
       }    
       return lsum+rsum;
    }
};