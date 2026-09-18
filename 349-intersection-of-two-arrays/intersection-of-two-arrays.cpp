class Solution 
{
public:
    vector<int> intersection(vector<int>& ar1, vector<int>& ar2) 
    {
        int s1 = ar1.size();
        int s2 = ar2.size();

        vector<int> ar3;

        for(int x = 0; x < s1; x++)
        {
            bool found = false;

            for(int y = 0; y < ar3.size(); y++)
            {
                if(ar1[x] == ar3[y])
                {
                    found = true;
                    break;
                }
            }

            if(found)
            {
                continue;
            }

            for(int z = 0; z < s2; z++)
            {
                if(ar1[x] == ar2[z])
                {
                    ar3.push_back(ar1[x]);
                    break;
                }
            }
        }

        return ar3;
    }
};