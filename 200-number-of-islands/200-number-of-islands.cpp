class Solution {
public:
   
    void dfs(int r,int c,vector<vector<char>> &grid)
    {
        grid[r][c] = '0';
        int row[] = {0,1,0,-1};
        int col[] = {1,0,-1,0};
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<4;i++)
        {
            int rr = r + row[i];
            int cc = c + col[i];
            if((rr>=0 && rr <m) && ( cc>=0 && cc<n)  && grid[rr][cc] == '1')
            {
                dfs(rr,cc,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( grid[i][j]== '1')
                {
                    count++;
                    dfs(i,j,grid);
                    
                }
            }
        }
        return count;
    }
};