class Solution 
{
    public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
    {
        int m=mat.size();
        int n=mat[0].size();

        for(int k=0;k<4;k++)
        {
            if(mat==target)
            {
                return true;
            }
            for(int x=0;x<m;x++)
            {
                for(int y=x;y<n;y++)
                {
                    swap(mat[x][y],mat[y][x]);
                }
            }
            reverse(mat.begin(),mat.end());
        }    
        return false;
    }
};