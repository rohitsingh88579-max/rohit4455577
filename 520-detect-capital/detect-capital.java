class Solution 
{
    public boolean detectCapitalUse(String word) 
    {
        int count=0;
        for(int x=0;x<word.length();x++)
        {
            char ch=word.charAt(x);
            if(Character.isUpperCase(ch))
            {
                count++;
            }
        }    
        if(count==0||count==word.length()||(count==1 && Character.isUpperCase(word.charAt(0))))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}