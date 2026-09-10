class Solution 
{
    public:
    int largestAltitude(vector<int>& gain) 
    {
       int alt=0;
       int n=gain.size();
       int max_a=0;
       for(int x=0;x<n;x++)
       {
         alt+=gain[x];
         max_a=max(max_a,alt);
       }
       return max_a;

    }
};