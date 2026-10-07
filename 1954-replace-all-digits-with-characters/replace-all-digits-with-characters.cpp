class Solution 
{
    public:
    string replaceDigits(string s) 
    {
       for(int x=1;x<s.size();x+=2)
       {
         s[x]+=s[x-1]-'0';
       }    
       return s;
    }
};