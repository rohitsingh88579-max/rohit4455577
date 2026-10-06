class Solution 
{
    public:
    void solveSudoku(vector<vector<char>>& board) 
    {
        solve(board);            
    }
    public:
    bool isValid(vector<vector<char>>&board,int row,int col,char n)
    {
       for(int x=0;x<9;x++)
       {
         for(int y=0;y<9;y++)
         {
            if(board[x][col]==n)
            {
                return false;
            }
            if(board[row][x]==n)
            {
                return false;
            }
            int rowBox=3*(row/3)+x/3;
            int colBox=3*(col/3)+x%3;
            if(board[rowBox][colBox]==n)
            {
                return false;
            }
         }
       }
       return true;
    }
    public:
    bool solve(vector<vector<char>>& board)
    {
       for(int row=0;row<9;row++)
       {
         for(int col=0;col<9;col++)
         {
            if(board[row][col]=='.')
            {
                for(char num='1';num<='9';num++)
                {
                    if(isValid(board,row,col,num))
                    {
                        board[row][col]=num;
                        if(solve(board)==true)
                        {
                          return true;
                        }
                        board[row][col]='.';
                    }
                }
                return false;
            }
         }
       }
       return true;
    }

};