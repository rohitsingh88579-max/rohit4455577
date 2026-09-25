class Solution 
{
    public String reverseOnlyLetters(String s) 
    {
        s=s.trim();
        int n=s.length();
        int left=0;
        int right=n-1;
        char ch[]=s.toCharArray();
        while(left<=right)
        {
            if(!Character.isLetter(s.charAt(left)))
            {
                left++;
            }
            else if(!Character.isLetter(s.charAt(right)))
            {
                right--;
            }
            else
            {
               char temp=ch[left];
               ch[left]=ch[right];
               ch[right]=temp;

               left++;
               right--;
            }
        }
        return  new String(ch);
    }
}