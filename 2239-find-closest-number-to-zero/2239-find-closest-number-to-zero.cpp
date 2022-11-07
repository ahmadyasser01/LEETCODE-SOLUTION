class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=INT_MIN;
        int maxi = INT_MAX;
        for(auto x: nums)
        {
            if(abs(x)<=maxi) {
                if(abs(x)==maxi ) ans = ans>x?ans:x;
                else ans = x;
                maxi= abs(x);                 
          }
        }
        return ans;
        
    }
};