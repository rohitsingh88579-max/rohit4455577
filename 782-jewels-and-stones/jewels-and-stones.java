class Solution 
{
    public int numJewelsInStones(String jewels, String stones) 
    {
        int count=0;
        int n=stones.length();
        for(int x=0;x<n;x++)
        {
            if(jewels.indexOf(stones.charAt(x))!=-1)
            {
                count++;
            }
        }
        return count;
    }
}