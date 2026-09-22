class Solution 
{
    public:
    bool rotateString(string s, string goal) 
    {
       int s1=s.size();
       int s2=goal.size();
       if(s1!=s2)
       {
        return false;
       }   
       if((s+s).find(goal)!=string::npos)
       {
         return true;
       }
       return false;
    }
};