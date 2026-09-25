class Solution 
{
    public:
    string reverseVowels(string s) 
    {
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left<right)
        {
            while(left<n &&!(isVowel(s[left])))
            {
               left++;
            }
            while(right>=0 &&!(isVowel(s[right])))
            {
                right--;
            }
            if(left<right)
            {
                swap(s[left],s[right]);
            }
            left++;
            right--;
        }
        return s;
    }

    public:
    bool isVowel(char ch)
    {
        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    }
};