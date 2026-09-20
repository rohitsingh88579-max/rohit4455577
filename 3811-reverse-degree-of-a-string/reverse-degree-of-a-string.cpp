class Solution 
{
    public:
    int reverseDegree(string s) 
    {
       int ans=0;
       for(int x=0;x<s.size();x++)
       {
         int rev=26-(s[x]-'a');
         ans+=rev*(x+1);
       }    
       return ans;
    }
};