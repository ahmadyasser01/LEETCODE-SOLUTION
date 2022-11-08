class Solution {
public:

    int bfs(vector<vector<int>>&grid,int i,int j ,vector<vector<bool>>&vis,int m , int n)
    {
    vector<int> dr ={-1,1,0,0};
    vector<int> dc = {0,0,1,-1};
        int area =1;
        queue<int> rq;
        queue<int> cq;
        vis[i][j] = true;
        rq.push(i);
        cq.push(j);
        int nodeInNext=0,nodeInLayer=1;
        while(!rq.empty())
        {
            int r = rq.front();
            int c = cq.front();
            rq.pop();
            cq.pop();
            for(int a=0;a<4;a++)
            {
                int rr= r +dr[a];
                int cc= c+dc[a];
                if(rr<0 || cc<0) continue;
                if(rr>=m || cc>=n) continue;
                if(vis[rr][cc]) continue;
                if(grid[rr][cc] ==0) continue;
                vis[rr][cc] = true;
                rq.push(rr);
                cq.push(cc);
                nodeInNext++;
               
            }
            nodeInLayer--;
            if(nodeInLayer ==0)
            {
                nodeInLayer = nodeInNext;
                area += nodeInNext;
                nodeInNext = 0;
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m+1,vector<bool>(n+1,false));
        int maxi = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
                 if(grid[i][j]!=0 && !vis[i][j]) {
                  int area= bfs(grid,i,j,vis,m,n);
                  maxi = max(maxi,area);
                 }
        }
    }
     return maxi;
    }
        
};