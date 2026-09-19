class Solution 
{
    public int findJudge(int n, int[][] trust) 
    {
        int trustIn[]=new int[n+1];
        int trustedBy[]=new int[n+1];
        
        for(int x=0;x<trust.length;x++)
        {
            int a=trust[x][0];
            int b=trust[x][1];

            trustIn[a]++;
            trustedBy[b]++;
        }     
        for(int x=1;x<=n;x++)
        {
            if(trustIn[x]==0 && trustedBy[x]==n-1)
            {
                return x;
            }
        }
        return -1;
    }
}