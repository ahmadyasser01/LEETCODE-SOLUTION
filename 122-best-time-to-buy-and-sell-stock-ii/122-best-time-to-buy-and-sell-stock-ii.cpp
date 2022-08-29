class Solution {
public:
     int dpmem(vector<int>&arr,vector<vector<int>>&dp,int buy,int i)
    {
        if(i>=arr.size()) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        
        int cooldown = dpmem(arr,dp,buy,i+1);
        if(buy==1)
        {
            int buyProfit = dpmem(arr,dp,!buy,i+1) - arr[i];
            dp[i][buy] = max(buyProfit,cooldown);
        }
        else if(buy==0){
            int sellProfit = dpmem(arr,dp,!buy,i+1) + arr[i];
            dp[i][buy] = max(sellProfit,cooldown);
            
        }
        return dp[i][buy];
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return dpmem(prices,dp,1,0);
        
        
    }
};