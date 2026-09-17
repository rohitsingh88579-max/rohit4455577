class Solution 
{
    public:
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>ans;
        vector<string>board(n);    
        string s(n,'.');
        for(int x=0;x<n;x++)
        {
            board[x]=s;
        }
        solve(0,ans,board,n);
        return ans;
    }
    public:
    void solve(int col,vector<vector<string>>& ans,vector<string>& board,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int x=0;x<n;x++)
        {
            if(isSafe(x,col,board,n))
            {
               board[x][col]='Q';
               solve(col+1,ans,board,n);
               board[x][col]='.';
            }
        }
    }
    public:
    bool isSafe(int row,int col,vector<string>& board,int n)
    {
        int r=row;
        int c=col;
        while(r>=0 && c>=0)
        {
            if(board[r][c]=='Q')
            {
                return false;
            }
            r--;
            c--;
        }
        r=row;
        c=col;
        while(c>=0)
        {
            if(board[r][c]=='Q')
            {
                return false;
            }
            c--;
        }
        r=row;
        c=col;
         while(r<n && c>=0)
        {
            if(board[r][c]=='Q')
            {
                return false;
            }
            r++;
            c--;
        }
        return true;
    }
};