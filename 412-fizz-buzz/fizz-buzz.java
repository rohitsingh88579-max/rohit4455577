class Solution 
{
    public List<String> fizzBuzz(int n) 
    {
        List<String> str=new ArrayList<>();
        for(int x=1;x<=n;x++)
        {
            if(x%3==0 && x%5==0)
            {
                str.add("FizzBuzz");
            }
            else if(x%3==0)
            {
                str.add("Fizz");
            }
            else if(x%5==0)
            {
                str.add("Buzz");
            }
            else
            {
                str.add(Integer.toString(x));
            }
        }
        return str;
    }
}