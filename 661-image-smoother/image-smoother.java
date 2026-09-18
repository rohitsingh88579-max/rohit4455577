class Solution 
{
    public int[][] imageSmoother(int[][] img) 
    {
        int m=img.length;
        int n=img[0].length;

        int [][]ans=new int[m][n];
        for(int x=0;x<m;x++)
        {
            for(int y=0;y<n;y++)
            {
               ans[x][y]+=Average(img,x,y,m,n);
            }
        }
        return ans;
        
    }
    public int Average(int[][] img,int r,int c,int row,int col)
    {
        int total=0;
        int count=0;

        int top=Math.max(0,r-1);
        int bottom=Math.min(row,r+2);
        int left=Math.max(0,c-1);
        int right=Math.min(col,c+2);

        for(int x=top;x<bottom;x++)
        {
            for(int y=left;y<right;y++)
            {
                total+=img[x][y];
                count++;
            }
        }
        return total/count;
    }
}