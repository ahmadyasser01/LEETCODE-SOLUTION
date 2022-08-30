class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,4000));
        dp[m-1][n-1] = grid[m-1][n-1]; 
        
        for(int i=dp.size()-2;i>=0;i--)
        {
            for(int j=dp[0].size()-2;j>=0;j--)
                
            {
                if(i==m-1 && j==n-1) continue;
                dp[i][j] = grid[i][j] + min(dp[i+1][j],dp[i][j+1]);
            }
        }
        
        return dp[0][0];
        
    }
};