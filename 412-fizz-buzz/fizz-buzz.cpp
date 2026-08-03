class Solution 
{
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> str;
        for(int x=1;x<=n;x++)
        {
            if(x%3==0 && x%5==0)
            {
                str.push_back("FizzBuzz");
            }
            else if(x%3==0 )
            {
                str.push_back("Fizz");
            }
            else if(x%5==0 )
            {
                str.push_back("Buzz");
            }
            else
            {
                str.push_back(to_string(x));
            }
        }
        return str;
    }
};