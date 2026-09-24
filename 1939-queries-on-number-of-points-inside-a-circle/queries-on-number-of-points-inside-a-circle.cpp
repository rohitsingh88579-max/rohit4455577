class Solution 
{
    public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
    {
        vector<int>ans;
        for(int x=0;x<queries.size();x++)
        {
            int count=0;
            for(int y=0;y<points.size();y++)
            {
               if(queries[x][2] >= sqrt(pow(points[y][0] - queries[x][0], 2)+ pow(points[y][1] - queries[x][1], 2)))
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};