class Solution {
public:
    int coinChange(vector<int>& denoms, int n) {
              vector<vector<int>>dp(denoms.size()+1,vector<int>(n+1,1e5));
  for(int i=1;i<=denoms.size();i++)
    {
      for(int j =0;j<=n;j++)
        {
          if(j==0) {
            dp[i][j] = 0;
            continue;
          }
          if(denoms[i-1]<=j){
           dp[i][j] = min(dp[i-1][j],1+dp[i][j-denoms[i-1]]);
          }
          else if (denoms[i-1]>j)
          {
            dp[i][j] = dp[i-1][j];
          }

        }
    }
  return dp[denoms.size()][n]>=1e5? -1:dp[denoms.size()][n];
        
    
    }
};