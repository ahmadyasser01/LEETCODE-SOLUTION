class Solution {
public:
    int change(int n, vector<int>& denoms) {
       vector<vector<int>>dp(denoms.size()+1,vector<int>(n+1,0));
  for(int i=1;i<=denoms.size();i++)
    {
      for(int j =0;j<=n;j++)
        {
          if(j==0) {
            dp[i][j] = 1;
            continue;
          }
          if(denoms[i-1]<=j){
           dp[i][j] = (dp[i-1][j],dp[i-1][j]+dp[i][j-denoms[i-1]]);
          }
          else if (denoms[i-1]>j)
          {
            dp[i][j] = dp[i-1][j];
          }

        }
    }
  return dp[denoms.size()][n];
        
    }
};