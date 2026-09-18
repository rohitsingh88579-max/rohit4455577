class Solution 
{
    public:
    string finalString(string s) 
    {
       int n=s.size();
       string ans="";
       for(char ch:s)
       {
         if(ch!='i')
         {
            ans+=ch;
         }
         else
         {
            reverse(ans.begin(),ans.end());
         }
       }    
       return ans;
    }
};