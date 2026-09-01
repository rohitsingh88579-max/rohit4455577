class Solution 
{
    public:
    bool areSimilar(vector<vector<int>>& matrix, int k) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        k%=col;
        for(int x=0;x<row;x++)    
        {
            for(int y=0;y<col;y++)
            {
                if(matrix[x][y]!=matrix[x][(y+k)%col])
                {
                    return false;
                }
            }
        }
        return true;
    }
};