class Solution
 {
    public boolean isPalindrome(int n)
    {
        int sum=0;
        if(n<0)
        {
            return false;
        }
        else
        {
            int temp=n;
            while(temp!=0)
            {
                int d=temp%10;
                sum=sum*10+d;
                temp/=10;
            }
        }
        if(sum==n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}