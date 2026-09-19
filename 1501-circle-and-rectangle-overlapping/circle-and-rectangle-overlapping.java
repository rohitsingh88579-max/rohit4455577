class Solution 
{
    public boolean checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) 
    {
       int cx=Math.max(x1,Math.min(x2,xCenter));
       int cy=Math.max(y1,Math.min(y2,yCenter));

       int dx=cx-xCenter;
       int dy=cy-yCenter;
       return dx*dx+dy*dy<=radius*radius;
    }
}