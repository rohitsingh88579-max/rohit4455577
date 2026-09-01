class Solution 
{
    public:
    bool areSimilar(vector<vector<int>>& mat, int k) 
    {
       int row=mat.size();
       int col=mat[0].size();
       k%=col;
       for(int x=0;x<row;x++)
       {
        for(int y=0;y<col;y++)
        {
            if(mat[x][y]!=mat[x][(y+k)%col])
            {
                return false;
            }
        }
       }    
       return true;
    }
};