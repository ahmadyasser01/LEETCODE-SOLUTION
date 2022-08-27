class Solution {
public:
   
    // int dp[46];
    int climbStairs(int n) {
        
        // if(n<1) return 0;
        // if(dp[n]!=-0) return dp[n];
        // if(n==1) return dp[n] = 1;
        // if(n==2) return dp[n] = 2;
        // return dp[n] = climbStairs(n-1) + climbStairs(n-2);
        
        int a=1,b=1,c;
        for(int i=0;i<n-1;i++)
        {
            c =a ;
            a = a+b;
            b = c;
        }
        return a;
        
    }
};