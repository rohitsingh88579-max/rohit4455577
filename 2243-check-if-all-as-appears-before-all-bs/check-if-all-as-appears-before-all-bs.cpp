class Solution 
{
    public:
    bool checkString(string s) 
    {
        int l=s.size();
        for(int x=1;x<l;x++)
        {
            if(s[x]<s[x-1])
            {
                return false;
            }
        }    
        return true;
    }
};