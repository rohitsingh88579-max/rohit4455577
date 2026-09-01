class Solution 
{
    public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        for(int x=n-1;x>=0;x--)
        {
            if(digits[x]==9)
            {
                digits[x]=0;
            }
            else
            {
                digits[x]++;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;    
    }
};