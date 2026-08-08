class Solution 
{
    public:
    vector<int> spiralOrder(vector<vector<int>>& ar) 
    {
        int n=ar.size();
        int l=ar[0].size();
        vector<int>m;
        int top=0,left=0,bottom=n-1,right=l-1;
        while(top<=bottom && left<=right)
        {
            for(int x=left;x<=right;x++)
            {
                m.push_back(ar[top][x]);
            }
            top++;
            for(int x=top;x<=bottom;x++)
            {
                m.push_back(ar[x][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int x=right;x>=left;x--)
                {
                   m.push_back(ar[bottom][x]);
                }
            }
            bottom--;
            if(left<=right)
            {
                for(int x=bottom;x>=top;x--)
                {
                    m.push_back(ar[x][left]);
                }
            }
            left++;
        }
        return m;
    }
};